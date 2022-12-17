#include<iostream>
using namespace std;


//Multilevel inheritance 

class Student {
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);

};

void Student :: set_roll_number(int a){
    roll_number = a;
}

void Student :: get_roll_number(void){
    cout<<"The Student roll number is  : "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float physics;
        float math;

    public:
        void set_marks(float, float);
        void get_marks(void);

};

void Exam :: set_marks(float m1 , float m2){
    physics = m1;
    math = m2;
}

void Exam :: get_marks(void){
    cout<<"The value of Student  physics marks are : "<<physics<<endl;
    cout<<"The value of Student  math marks are : "<<math<<endl;
}

class result : public Exam{
    float percentage;
    public:
        void display_result(void);
};

void result :: display_result(void){
    get_roll_number();
    get_marks();
    cout<<"The student percentage is :"<< (physics+math)/2<<"%"<<endl;

}


int main(){

    /*
    Notes : 
        1. If we are inherited B from A and C from B : [A ---> B ---->C]
        2. A is base class for B and B is base class for C.
        3. A ---> B ---> C is called Inheritance Path .
    */
    result Ankesh;
    Ankesh.set_roll_number(44);
    Ankesh.set_marks(92 , 90);
    Ankesh.display_result();
    
    return 0;
}
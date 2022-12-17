#include<iostream>
using namespace std;

/*
inheritance :
Student ---> Test [Done]
Student ---> Sports [Done]
Test  ---> Result [Done]
Sports  ---> Result [Done]

*/

class Student{ // This is Base class declared here
    protected:
        int roll_no ;
    public:
        void set_number(int x){
            roll_no = x ;
        }

        void print_number(void){
            cout<<"Your roll number is :"<<roll_no <<endl;
        }
            

};

class Test : virtual public Student { // This is  inherited from students virtual class by using virtual keywords  
    protected: 
        float maths , physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1 ;
            physics = m2 ;
        }
        void print_marks(void){
            cout<< "You marks is given here : "<<endl
                << "Maths : "<<maths<<endl 
                << "physics :"<<physics<<endl;
        }
};
/*

Note : 

1. virtal base claass is declared to avoid ambuiguity because here roll no is inherited in both test as well as sports class 
   if we inherit another class from both the class inherited from student (i.e Test and Score ) then two roll no is inherit in normal case but 
   to avoid ambuiguity we use virtual keyword so that only one roll number is inherit to result class to avoid ambuiguity.

*/

class Sports : virtual public Student{ // This is inherited from student base class by using virtual keyword 
    protected:
        int score;
    public:
        void set_score(int sc){
            score = sc;
        }
        void print_score(void){
            cout<< "Your score in sports is : "<< score<<endl;

        }
};

class Result : public Test, public Sports { // This is child class inherit from both the child class of Student (Test & Sports)
    private:
        float total;

    public:
        void display(void){
            total = maths + physics + score ;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score in all the activites and academic is "<<total <<endl;
            
        }
};

int main(){
    Result Ankesh; // Creating object of Result class to call all function of its parent and parent of parent 
    Ankesh.set_number(12015940);
    Ankesh.set_marks(90.86 , 93.44);
    Ankesh.set_score(8);
    Ankesh.display();
    
    return 0;
}
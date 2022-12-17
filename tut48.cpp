#include<iostream>
using namespace std;

/*
Case 1 :-
Class B : public  A{
    // Order of execution of Constructor in this case ---->  first [A] then [B]
};



Case 2 :- 
Class B : public A , public C {
     Order of execution of constructor in this case -----> First [A] , then [C] and lastly [B] .
};

Case 3 :- 
class B : public C , virtual public D {
    // Order of execution of constructor in this case ---> first [d] (Virual base class will get more precedence ) , then [C], and lastly [B].
}

*/

class Base1 {
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 Constructor is called :"<<endl;
        }
        void printDataData1(void){
            cout<<"The value of Data1 is : "<<data1<<endl;
        }
};


class Base2 {
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 Constructor is called :"<<endl;
        }
        void printDataData2(void){
            cout<<"The value of Data2 is : "<<data2<<endl;
        }
};

class Derived : public Base1 , public Base2 { // But if we change here the position of Base1 and base 2 then calling of construct will change .
    int derived1 , derived2;
    public:
        // Here Constructor of Derived class is declared and take four argument where a is assigned to base1 constructor
        // and b is assigned to base2 constructor and c and d is assigned to its own private data member and print the value of same .
        Derived(int a, int b, int c, int d) : Base1(a) , Base2(b){ // Here if we change base1 and base 2 position calling of constructor will not be affected .
            derived1 = c ;
            derived2 = d ;
            cout<<"Derived Constructor is called : "<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of Derived1 is :"<<derived1<<endl;
            cout<<"The value of Derived2 is :"<<derived2<<endl;
        }
};

int main(){
    Derived Ankesh(10, 20, 30, 40); // Object of Derived class is declared and taking four values inside it and assign value to its own position.
    Ankesh.printDataData1(); // 
    Ankesh.printDataData2();
    Ankesh.printDataDerived();

    
    return 0;
}
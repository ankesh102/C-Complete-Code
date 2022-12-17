// Copy constructor 

#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){  // Default constructor is necessary to declare when we initialize constructor
            a = 0;
        }


        Number(int num){  // Constructor with parameter
            a = num;
                
        } 

        // When no copy constructor found compiler supplied its own copy constructor and run the program no error occured.


        Number(Number &obj){  // Copy Constructor with parameter here reference obj takes and store its value and when we call it it reference to that 
            cout<<"Copy Constructor called !!!"<<endl;
            a = obj.a;
                
        } 

        void display(){
            cout<< "The value of number is "<< a<<endl;

        }


};

int main(){
    Number x , y(25) , z(34),z2;
    x.display();
    y.display();
    z.display();


    // z1 should exactly resembles z or x or y
    Number z1(z); // Copy Constructor invoked 
    z1.display();

    z2 = z; // copy constructor not called because z2 is declared earlier
    z2.display();

    Number z3 = y; // Copy constructor called or invoked because is is declared and initialize here 
    z3.display();
    
    return 0;
}
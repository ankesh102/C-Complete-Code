// Destructor :- It is  used to destroy the block of memory space which were
//  created to store it when program terminates and compiler came to know tat it is of no use .

// Destructor never takes argument nor does it return any value.

#include<iostream>
using namespace std;

int count = 0; // Global Variable 

class num{
    public:
        num(){ // constructor declaration 
            count++;
            cout<<"This is the time when my Constructor is called for object number "<<count<<endl;
        }

        ~num(){  // Destructor declaration
            cout<<"This is the time when my Desstructor is called for object number "<<count<<endl;
            count--;
        }

};

int main(){
    cout<<"We are inside our main Function ."<<endl;
    cout<<"Creating our first object . "<<endl;
    num n1;
    {
        cout<<"Entering this block . "<<endl;
        cout<<"Creating two more object now "<<endl;
        num n2, n3;
        cout<<"Exiting this block . "<<endl;
    }
    cout<<"Back to main"<<endl;
    
    return 0;
}
#include<iostream>
using namespace std;

// Virtual Function . 


class Base_class{
    public:
        int var_base;
        virtual void display(){ // Virtual funtion 
            cout<<"Displaying Base class variable var_base "<< var_base<<endl;
        }
};

/*
If we want to point base class pointer to derived class object and upon running it can access derived class function then use
 virtual function in base class then you can access base and derived class function as per pointing.

 Note :- 
 Virtual function will decide then pointer object will bind with which function .
*/

class Derived : public Base_class{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<< var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<< var_derived<<endl;
        }

};

int main(){
    Base_class * base_class_pointer;
    Base_class obj_base;
    Derived obj_derived;
    base_class_pointer = & obj_derived; // Pointing to derived class object
    base_class_pointer -> var_base = 30;
    base_class_pointer -> display();//now this will execute with derived class function .
    
    return 0;
}
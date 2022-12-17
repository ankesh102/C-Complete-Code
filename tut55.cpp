#include<iostream>
using namespace std; 

// Base class Pointer points to derived class  to Derived class .  

class Base_class{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<< var_base<<endl;
        }
};

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
    base_class_pointer = & obj_derived; // Pointing  base class pointer to derived class 

    base_class_pointer-> var_base = 25;
    // base_class_pointer-> var_derived = 25; // Will thorw an error because we cannot acces derived class data member through base class pointer .
    base_class_pointer->display();

    base_class_pointer-> var_base = 2000;
    base_class_pointer -> display();

    Derived * derived_class_pointer; // derived class pointer 
    derived_class_pointer = &obj_derived; 
    derived_class_pointer-> var_derived = 3800;
    derived_class_pointer-> var_base= 1400;
    derived_class_pointer -> display();



    
    return 0;
}
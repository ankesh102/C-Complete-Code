#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        } 
        Employee(){}
};

// Derived class syntax 

/*
// class  {{Derived class name}} : {{Visibility mode}}  {{base class name}}
{
    class/members/methods....etc.
}

Note : 
1. Default visibility mode is private . 
2. Public visibility mode :- Public members of the base class become the public memeber of the derived class 
3. Private visibility mode :- Public members of the base class become the private members of the derived class 
4. Private members are never inherited from 
*/

// Creating a Programmer class derived  from base class Employee :

class Programmer : public Employee{
    public:
        int languagecode;
        Programmer(int inpId){
            id = inpId;
            languagecode = 9;
        }
        
        void getData(){
            cout<<id<<endl;
        }
};



int main(){
    Employee Ankesh(1), Ishann(3);
    cout<<Ankesh.salary << endl;
    cout<<Ishann.salary << endl;
    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();


    return 0;
}
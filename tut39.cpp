#include<iostream>
using namespace std;

// Single Inheritance 

class Base {
    // protected:
    public:
    int a;
    private:
    int b;

};

class Derived : protected Base {
    // public:
    // void display(int q){
    //     a=q;
    //     return q;
    // }

};

/*
 
For a protected members :- 

                            Private Derivation      Public Derivation       Protected Derivation 
1. Private members          Cannot inherited        cannot inherited        cannot inherited
2. protected members        private                  protected              protected
3. Public members           private                  public                 protected


*/




int main(){
    Base b;
    Derived d;
    // cout<<d.a; // cannot work since a is protected in both base as well as derived class .
    // d.display();
    
    return 0;
}
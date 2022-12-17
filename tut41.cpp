#include<iostream>
using namespace std;

// Multiple inheritance syntax 
/*
 class Derived : visiblity_mode base1 , visiblity_mode base2 , visiblity_mode base3 , visiblity_mode base4 ....and upto base class from where we define 

*/

class Base1{
    protected:
        int base1var;
    public:
        void set_base1var(int a){
            base1var = a;
        }

};
class Base2{
    protected:
        int base2var;
    public:
        void set_base2var(int a){
            base2var = a;
        }

};
class Base3{
    protected:
        int base3var;
    public:
        void set_base3var(int a){
            base3var = a;
        }

};
class Base4{
    protected:
        int base4var;
    public:
        void set_base4var(int a){
            base4var = a;
        }

};

class derived : public Base1,public Base2, public Base3, public Base4{
    public:
        void show(void){
            cout<<"The value of base1var is : "<<base1var<<endl;
            cout<<"The value of base2var is : "<<base2var<<endl;
            cout<<"The value of base3var is : "<<base3var<<endl;
            cout<<"The value of base1var is : "<<base4var<<endl;
            cout<<"The sum of base1var,base2var,base3var,base4var is : "<<base1var + base2var +base3var +base4var<<endl;
        }

}; 

// The inherited class will look someting like this :
/*
Data Memebers :
    base1var = protected;
    base1var = protected;
    base1var = protected;
    base1var = protected;

Member function :
    set_base1var = public;
    set_base2var = public;
    set_base3var = public;
    set_base4var = public;

*/

int main(){
    derived ankesh;
    ankesh.set_base1var(10);
    ankesh.set_base2var(15);
    ankesh.set_base3var(20);
    ankesh.set_base4var(30);
    ankesh.show();
    
    return 0;
}
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // void setData(int a){
        //     this->a = a; // here this is a pointer and indicates that class variable will be this and assign value to it.
        // }

        A & setData(int a){ // we can also get value by giving return type as A to its reference 
            this-> a=a;
            return *this;
        }
        void getData(void){
            cout<<"The Value of a in this case is :- "<<a<<endl;
        }
};

int main(){
    A a;
    // a.setData(10);
    a.setData(10).getData(); // by using A,& we can acces get and set data together .
    // a.getData();

    
    
    return 0;
}
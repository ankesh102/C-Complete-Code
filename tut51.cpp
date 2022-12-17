#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int a , int b){
            real = a;
            imaginary = b;
        }
        void getData(void){
            cout<<"your real number is : "<<real<<endl;
            cout<<"your imaginary number is : "<<imaginary<<endl;
        }
};

int main(){
    Complex c1;
    // Complex *ptr = &c1; // this is pointer declared here for object of Complex class 
    Complex *ptr = new Complex;
    // c1.setData(10 , 30);// below one works same as this one but using diffenrent method that is pointer 
    //  c1.getData();
    (*ptr).setData(1 , 4); // using dereferencing of pointer 
    // Using arrow operator 
    // ptr ->setData(1,40);
    ptr->getData();

    


    // Array of object 
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();


    cout<<"Hello";
    
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    //Pointer in c++

    int a = 3;
    int* b = &a;

    //Address of Operators
    cout<< "The Address of a is :- " <<b<<endl;
    cout<< "The Address of a is :- " <<&a<<endl;

    // (Value_at ) Dereference operator

    cout<<" The value of a is " <<*b<<endl;
    cout<< "The Address of pointer variable b   is :- " <<&b<<endl;//Address of pointer variable here


    // Pointer to pointer concept

    int** c = &b;

    cout<<"The Address of b is " <<c<<endl;
    cout<<"The Address of b is " <<&b<<endl;
    cout<<"The value at Address c is " <<*c<<endl;//because pointer variable store the address of 'a' here so value of address b print here 
    cout<<"The value at address b is  "<<**c<<endl;// here value of address b will not print , value stored at address b will print here that is value of a


    return 0;
}
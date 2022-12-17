#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a+b;
//     return  c;
// }

// void swap(int a, int b){ // Here call by value   is used to swap the two numbers but values are not swapped
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }


// int &
// void swapReferenceVar(int &a, int &b){ // Here reference variable &  is used to swap the two numbers and is accepted
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
    // return a;// this is for updating value to function call
// }


// void swapPointer(int* a, int* b){ // Here reference variable &  is used to swap the two numbers
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }


int main(){
    int a = 80, b = 70;
    cout<< "The value of a is :- "<<a<<"  and value of b is : - "<<b<<endl;

    // swap(a,b);// this will not work to swap the number

    //swapReferenceVar(a,b);
    // swapPointer(&a,&b);// this will work for swappointer and assing the address and swap the number 

    // swapReferenceVar(a,b) = 890;// from this we can assign value to function call and update the value of retuen value in function

    cout<< "The value of a is :- "<<a<<"  and value of b is : - "<<b<<endl;




    // cout<<"The sum of a + b is :- "<<sum(4,6);
    return 0;
}
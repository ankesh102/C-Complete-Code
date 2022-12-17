#include<iostream>
using namespace std;

// ********** Recursion and Recursive formula of factorial operation 

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// ********** Recursion and Recursive formula of fibonacci operation

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}



int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is given as "<<factorial(a)<<endl;
    cout<<"The term in finonacci sequence at a position of  "<<a<<" is given as "<<fib(a)<<endl;

    
    return 0;
}
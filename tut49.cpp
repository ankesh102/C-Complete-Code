#include<iostream>
using namespace std;

// Initialization List in Constructor
/*
Syntax of initialization list in Constructor : 
constructor (argument-list): initialization-section{
    assignment + other code ;
}

Example :

class Test{
    int a;
    int b;
    public:
        Test(int i , int j): a(i), b(j){Constructor-body}
};
*/ 


class Test {
    int a;
    int b;
    public:
        // Test(int i, int j) :a(i) , b(j){ // we can also initialize here and value of i and j will be copied to a and b 
        // Test(int i, int j) :a(i) , b(2 + j){ // we can also initialize here and value of i and j will be copied to a and b and perform opertion
        // Test(int i, int j) :a(i) , b(j * 5){ // we can also initialize here and value of i and j will be copied to a and b and perform opertion
        // Test(int i, int j) :a(i) , b(j * a){ // we can also initialize here and value of i and j will be copied to a and b and perform opertion 
                                                //by using a value just declared before

        // Test(int i, int j) :a(i + b) , b(j){ // we can not  initialize this  here as value of a and b are initialized in that order so first initialize a then then use it and vice versa
            // if we have to run it properly then change order of initialization of a and b in private data member part.

        // Test(int i, int j){ // we can also initialize here and value of i and j will be copied to a and b 
        //     a = i;
        //     b = j;// we can also initialize in body part as we have discussed earlier .

        // Test(int i, int j) :b(i + b) , a(j){
        Test(int i, int j) :b(j + a) , a(i){// Doubt 
            cout<<"Constructor called :"<<endl;
            // cout<<"The value of a will be :"<<a<<endl;
            cout<<"The value of b will be :"<<b<<endl;
            cout<<"The value of a will be :"<<a<<endl;

        } 
};

int main(){
    Test t(10 , 5);
    
    return 0;
}
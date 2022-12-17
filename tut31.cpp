#include<iostream>
using namespace std;

// This is Constructor overloading as multiple 
// costructor were formed and as per the parameter given they perform opeartion and this is called constructor overloading.


class Complex{
    int a;
    int b;
    public:
       Complex(int x, int y){ // Constructor with rwo parameter
        a = x;
        b = y;
       }

       Complex(int x){ // Constructor with one parameter
        a = x;
        b = 0;
       }

       Complex(){ // default constructor with no parameter.
        a = 0;
        b = 0;
       }

       void PrintNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

int main(){
    Complex c1(4 , 5);
    c1.PrintNumber();

    Complex c2(5);
    c2.PrintNumber();

    Complex c3;
    c3.PrintNumber();
    
    
    return 0;
}
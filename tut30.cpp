// Parameterized Constructor 
#include<iostream>
using namespace std;

class Complex
{

    int a , b;
public:
    Complex(int, int); //  Constructor Declaration   with 2 parameter

    void PrintNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y){ // This is a parameterized constructor as it takes 2 parameter
    a=x;
    b=y;
}

int main(){
    //Implicit Call
    Complex a(5, 7);
    a.PrintNumber();

    // Explicit call

    Complex b= Complex(9, 6);
    b.PrintNumber();
    
    return 0;
}
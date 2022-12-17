#include <iostream>
using namespace std;

class Complex
{

    int a , b;
public:

    // Constructor declaration 
    // Constructor is a special member function with same name as that of class 
    // it is used to initialize the object of its class 
    // It is automatically invoked(call the object) when object is created 
    Complex(void);

    void PrintNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

Complex :: Complex(void){ // This is a default constuctor because it didn't take any parameter
    a = 10;
    b = 2;
}

int main()
{

    Complex c1;
    c1.PrintNumber();

    return 0;
}


/*

Properties of a constructor 

1. It can have default argument.
2. It is declared inside public section of the class .
3.They are automatically invoked whenever object is created .
4. They cannot have return values and also dont have return types.
5. We cannot refer to their address.

*/
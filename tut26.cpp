#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    // Below lines means that non member -  sumcomplex function are allowed to do anything with my private variables(members).
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber(){
        cout<<"The value of complex no is : "<<a<< " + "<<b<<"i"<<endl;

    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){
    Complex a1,a2,sum;
    a1.setNumber(2,4);
    a1.printNumber();

    a2.setNumber(3,6);
    a2.printNumber();
    
    sum = sumComplex(a1,a2);
    sum.printNumber();
    return 0;
}

/*
Properties of Friend function :- 
1. not in the scope of class
2. Since it is not in the scope of class , it cannot be called from the object of that class.
c1.sumComplex ===== invalid
3.Can be invoked without help of any object.
4.usually contains object as arguments.
5. can be declared inside public or private section of the class


*/
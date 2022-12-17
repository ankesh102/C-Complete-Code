#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public: 
        Simple(int a, int b = 9, int c = 10){// This is constructor with default argument that is initialized with int initial value here 
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void Print();

        
};

void Simple :: Print(){
    cout<<"The value of data1 , data2 and data3 are "<<data1<<" , "<<data2 <<" and "<<data3<<endl;

}

int main(){
    // Simple s(1,11,2); // when we give value to all three parameter then that will take precedence over it otherwise if 
    Simple s(1);// we give no parameter value then they will print default value of that constructor ...
    s.Print();
    
    return 0;
}
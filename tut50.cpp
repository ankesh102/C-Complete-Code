#include<iostream>
using namespace std;

int main(){
    //Basic Example 

    int a = 10;
    int* ptr = &a; //  container used to store address of a
    *ptr = 25;
    cout<<"The value of a is :"<<*(ptr)<<endl;
    cout<<"The address  value of a is :"<<ptr<<endl;

    // New keywords 

    int* p = new int(99);
    cout<<"The value of p is "<<*(p)<<endl; 


    float* p12 = new float(99.99);
    cout<<"The value of p is "<<*(p12)<<endl; 


    int* arr = new int[5];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20; // we can also write like this 
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // delete[] arr; // used to delete and free the array from all values .
    cout<<"The value of arr[0]  is : "<<arr[0]<<endl;
    cout<<"The value of arr[1]  is : "<<arr[1]<<endl;
    cout<<"The value of arr[2]  is : "<<arr[2]<<endl;
    cout<<"The value of arr[3]  is : "<<arr[3]<<endl;
    cout<<"The value of arr[4]  is : "<<arr[4]<<endl;


    //delete operator


    
    return 0;
}
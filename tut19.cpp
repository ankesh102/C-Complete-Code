#include<iostream>
using namespace std;

//Function overloading :- it means creating a function with same name and perform different opeartion on that and it works finr 

// int mul(int a, int b){
//     return a*b;
// }

// int mul(int a, int b, int c){
//     return a*b*c;
// }


// Area of rectangle 
int area(int l,int b){
    return l*b;

}

//Area of rectangle  box 

int area(int l, int b, int h){
    return l*b*h;

}

//Area of circle 
int area(int r){
    return (3.14*r*r);

}


int main(){

    // cout<<"The product an 3 and 6 is "<<mul(3,6)<<endl;
    // cout<<"The product of 3,6 and 5 is "<<mul(3,6,5)<<endl;

    cout<<"The area of rectangle having length 6 and breadth 5 is "<<area(6,5)<<endl;
    cout<<"The area of rectangle box  having length 6 and breadth 5 and height 10  is "<<area(6,5,10)<<endl;
    cout<<"The area of circle  having radius  6  is "<<area(6)<<endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    // Array Examples 

    int marks[4] = {12,13,45,67};
    marks[2]=345;
    //cout<<marks;
    // cout<<"these are marks given below :- "<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //Array examples another type initialization

    int mathmarks[4];
    mathmarks[0]=123;
    mathmarks[1]=321;
    mathmarks[2]=456;
    mathmarks[3]=645;
    // cout<<"These are math marks given below :- "<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;


    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<"The value of mathmarks "<<i<< " is gives as :- "<<mathmarks[i]<<endl;
    // }


    // cout<< "This comes under While loop :- "<<endl;

    // int i=0;

    // while (i<4)
    // {
    //     /* code */
    //     cout<<"The value of mathmarks "<<i<< " is gives as :- "<<mathmarks[i]<<endl;
    //     i++;
    // }

    // cout<<"This comes under do while loop "<<endl;

    // int i = 0;

    // do
    // {
    //     /* code */
    //     cout<<"The value of mathmarks "<<i<< " is gives as :- "<<mathmarks[i]<<endl;
    //     i++;
    // } while (i<4);


    //Pointers and Arrays

    int* p = mathmarks;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<p<<endl;
    cout<<(p+1);

    

    // cout<<"The values of mathmarks[0]/*p is :- "<<*p<<endl;
    // cout<<"The values of mathmarks[1]/*(p+1) is :- "<<*(p+1)<<endl;
    // cout<<"The values of mathmarks[2]/*(p+2) is :- "<<*(p+2)<<endl;
    // cout<<"The values of mathmarks[3]/*(p+3) is :- "<<*(p+3)<<endl;



    
    
    
    return 0;
}
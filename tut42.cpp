#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:

        int a,b;
    public:
        void operation1(){
            cout<<"The sum of two number is "<<(a+b)<<endl;
            cout<<"The difference  of two number is "<<(a-b)<<endl;
            cout<<"The multiplication  of two number is "<<(a*b)<<endl;
            cout<<"The division  of two number is "<<(a/b)<<endl;
        }
        void setData1(int x1 , int x2){
            a = x1;
            b = x2;
        } 

};

class ScientificCalculator{
    protected:
        int v1,v2;
    public:
        void operation2(){
            cout<<"The square root of v1 is "<<sqrt(v1)<<endl;
            cout<<"The square root of v2 is "<<sqrt(v2)<<endl;
            cout<<"The cube root of v1 is "<<cbrt(v1)<<endl;
            cout<<"The cube root of v1 is "<<cbrt(v1)<<endl;
        }

        void setData2(int r1 , int r2){
            v1 = r1;
            v2 = r2;
        }
};

class Hybrid : public SimpleCalculator, public ScientificCalculator{
    public:

        // void setData(int s1, int s2){
        //     a = s1;
        //     b = s2;
        // }
        void display(int s1, int s2){
            SimpleCalculator::setData1(s1,s2);
            operation1();
            ScientificCalculator::setData2(s1,s2);
            operation2();
        }
};

int main(){
    // SimpleCalculator s1;
    // s1.setData(10,5);
    // s1.operation();
    // ScientificCalculator s2;
    // s2.setData(25,49);
    // s2.operation();

    Hybrid h1;
    h1.display(25, 49);
    // h1.display();
    
    return 0;
}
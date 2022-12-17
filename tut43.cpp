#include<iostream>
using namespace std;

class Ankesh1 {
    public: 
        void greet(){
            cout<< "Hello My Mom ....!!!"<<endl;

        }
};

class Ankesh2 {
    public: 
        void greet(){
            cout<< "Hello My Dad....!!!"<<endl;

        }
};

class ishaan : public Ankesh1 , public Ankesh2{
    int a;
    public:
        void greet(){
            Ankesh1::greet();
        }
};

class B{
    int a;
    public:
        void say(){
            cout<<"Hello my dear  friends ."<<endl;
        }
};
class D : public B{
    int a;
    public:
        void say(){
            cout<<"Hello my dear beautiful friends ."<<endl;
        }
};


int main(){
    // Ambiguity 1
    // Ankesh1 ishu1;
    // ishu1.greet();
    // Ankesh2 ishu2;
    // ishu2.greet();
    // ishaan ishu;
    // ishu.greet();

    // Ambiguity 2
    D Ankes;
    Ankes.say();
    B Anke;
    Anke.say();

    
    return 0;
}
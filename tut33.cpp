// Dynamic initialization of object using Constructor

#include<iostream>
using namespace std;

class BankDeposits{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

    BankDeposits(){} // By default constructor is declared so that if no argument is given it can run 
    BankDeposits(int p, int y, float r);// r value can be 0.04
    BankDeposits(int p, int y, int r); // r value can be  40 in integer format

    void show(); 

};

BankDeposits :: BankDeposits(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposits :: BankDeposits(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposits :: show(){
    cout << " The Principal Amount is "<< principal<< endl
    <<" . After " << years << " Years  The Amount will be "<<returnValue 
    <<" and interest will be added to it."<<endl;
}


int main(){
    BankDeposits bd1 , bd2 , bd3;
    int p , y;
    float r;
    int R;

    cout<< "Enter the value of P , y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposits(p , y , r);
    bd1.show();

    cout<< "Enter the value of P , y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposits(p , y , R);
    bd2.show();


    
    return 0;
}
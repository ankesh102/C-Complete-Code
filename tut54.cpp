// dsa practice 
#include<iostream>
using namespace std;

class fact1{
    int n1;
    public:
        int fact(int n){
            // n1=n;
        int res = 1;
        for (int i = 2; i <= n; i++)
        {
            res = res*i;
        }
        return res;
        
    }
};

int main(){
    fact1 Ankita;
    Ankita.fact(4);
    
    
    return 0;
}
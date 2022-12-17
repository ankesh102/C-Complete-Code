#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a , float b){
            id = a;
            price = b;

        }
        void getData(void){
            cout<<"The id code of the item is :"<<id<<endl;
            cout<<"The price of the item is :"<<price<<endl;
        }
        
};


    //   1 2 3 
    //       ^
    //       |
    //       |
    //       ptr
    //   ptrTemp
    // 

int main(){
    int size = 3;
    // int *ptr = new &size;
    // int *ptr = new size[34];

    //1.general store item
    //2.vegetable item 
    // 3. Hardware 
    
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p , i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the Id and Price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"Item no :"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    
    return 0;
}
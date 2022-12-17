#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void sum(X, Y);
};

class Y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
    friend void sum(X, Y);
};

void sum(X o1, Y o2)
{
    cout << "The summing of X and Y is " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setData(25);
    Y b1;
    b1.setData(10);
    sum(a1, b1);

    return 0;
}
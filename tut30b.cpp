#include <iostream>
#include<cmath>
using namespace std;

class Point
{
    int x, y;
    friend double Distance(Point x1, Point y1);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "The Point is ( " << x << " , " << y << " ) " << endl;
    }
};

// Create a function which takes two point object and compute the distance between  those point
double Distance(Point x1, Point y1)
{
    int dis = pow(x1.x - y1.x, 2) + pow(x1.y - y1.y, 2);
    int print = sqrt(dis);
    cout << "Distance among poins are = " << print << endl;
}

int main()
{
    Point p(1, 1);
    p.display();

    Point q(7, 8);
    q.display();

    Distance(p, q);

        return 0;
}
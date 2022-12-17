#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id :- " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of the  Employee is :-  " << id << "  and Employee no. is :-  " << count << endl;
    }

    static void getcount(void){
        cout<< "the value of count is "<< count <<endl;
    }
};


//count is the static data member of Employee class.
int Employee ::count = 100; // default value of count is 0

int main()
{

    Employee ankesh, shishu, beauty;

    // ankesh.id = 1; 
    // ankesh.count = 1; // cannot do this as id and count are declared as private.
    ankesh.setData();
    ankesh.getData();
    Employee :: getcount();


    shishu.setData();
    shishu.getData();
    Employee :: getcount();

    beauty.setData();
    beauty.getData();
    Employee :: getcount();

    return 0;
}
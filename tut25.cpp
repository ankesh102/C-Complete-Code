#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 120;
        cout << "Enter the id of Employee : -" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this Employee is :- " << id << endl;
    }
};

int main()
{
    // Employee Ankesh , Ankita , beauty , shishu ;
    // Ankesh.setId();
    // Ankesh.getId();  // this is  case to assign value but if the number of employee is more then we need to use array concept

    Employee AAP[4];

    for (int i = 0; i < 4; i++)
    {

        AAP[i].setId();
        AAP[i].getId();
    }

    return 0;
}
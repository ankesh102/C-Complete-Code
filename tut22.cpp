#include <iostream>
#include <string>
using namespace std;

// Nesting of member functions 

class binary
{
    // By default members of a class are private but if we write private no problem .... without writing private it will be fine . 
    string s;
    // void chk_bin(void);  ---> if we declare chk_bin as private then no one can accces it directly from main method and it can be accesed through 
    //one complememnt me jaha likha hai orr acccesed only via method of the class inside it .


public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter binary number :- " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin(); // if we want to check no is binary or not then we have to call this function here and no need to call separately in main method .
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout<<"Displaying binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}
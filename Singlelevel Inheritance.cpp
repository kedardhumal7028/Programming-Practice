#include<iostream>
using namespace std;

class Base
{
public:
    int A,B;

    Base()
    {
        cout<<"Inside Base Constructor\n";
    }

    ~Base()
    {
        cout<<"Inside Base Destructor\n";
    }
    void Fun()
    {
        cout<<"Inside Fun function for base class\n";
    }

};

class Derived : public Base
{
public:
    int X,Y;

    Derived()
    {
         cout<<"Inside Derived Constructor\n";
    }

    ~Derived()
    {
         cout<<"Inside Derived Destructor\n";
    }

    void gun()
    {
         cout<<"Inside gun function for derived class\n";
    }
};

int main()
{
    Derived dobj;
   // Base bobj;

    Derived *ptr = NULL;

    ptr = new Derived;
    ptr->gun();
    ptr->Fun();

    delete ptr;

    return 0;


}

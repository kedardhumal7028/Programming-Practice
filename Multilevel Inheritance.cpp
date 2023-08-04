#include<iostream>
using namespace std;

class Base
{
public:
    int A,B;

    Base()
    {
        cout<<"inside base constructor\n";
    }

    ~Base()
    {
        cout<<"inside base destructor\n";
    }

    void Fun()
    {
        cout<<"inside Fun function \n";

    }
};

class Derived : public Base
{
    public:
    int X,Y;

    Derived()
    {
        cout<<"inside Derived constructor\n";
    }

    ~Derived()
    {
        cout<<"inside Derived destructor\n";
    }

    void Gun()
    {
        cout<<"inside Gun Function\n";

    }

};

class DerivedX : public Derived
{
   public:
    int I,J;

    DerivedX()
    {
        cout<<"inside DerivedX constructor\n";
    }

    ~DerivedX()
    {
        cout<<"inside DerivedX destructor\n";
    }

    void Sun()
    {
        cout<<"inside Sun function\n";

    }
};

int main()
{
   // DerivedX obj;

   DerivedX *ptr = NULL;
   ptr = new DerivedX;

   ptr->Fun();
   ptr->Gun();
   ptr->Sun();

   delete ptr;

   return 0;
}


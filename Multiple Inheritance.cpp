#include<iostream>
using namespace std;

class Base1
{
public:
    int A,B;

    Base1()
    {
        cout<<"inside Base1 Constructor\n";
    }

    ~Base1()
    {
        cout<<"inside Base1 Destructor\n";

    }

    void Fun()
    {
        cout<<"inside Fun\n";

    }
};

class Base2
{
public:
    int I,J,K;

    Base2()
    {
        cout<<"inside Base2 Constructor\n";

    }

    ~Base2()
    {
        cout<<"inside Base2 Destructor\n";

    }

    void Gun()
    {
        cout<<"inside Gun\n";

    }
};

class Derived : public Base1,public Base2
{
public:
    int X,Y;

    Derived()
    {
        cout<<"inside Derived Constructor\n";

    }

    ~Derived()
    {
        cout<<"inside Derived Destructor\n";

    }

    void Sun()
    {
        cout<<"inside Sun\n";

    }
};

int main()
{
    Derived dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

    return 0;
}

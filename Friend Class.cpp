#include<iostream>
using namespace std;

class Demo
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }

    friend class Demo;
};

void Demo :: fun()
{
    Demo obj;
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";
    cout<<"value of k :"<<obj.k<<"\n";
}

void Demo :: gun()
{
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";
    cout<<"value of k :"<<obj.k<<"\n";
}

int main()
{
    Demo :: mobj;
    mobj.fun();
    mobj.gun();

    return 0;
}

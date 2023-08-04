#include<iostream>
using namespace std;

class Base
{
public:
    int a,b;
};

class Derived
{
public:
    int x,y;
};

int main()
{
    Base *bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;
    dp = &dobj;
//    bp = &dobj;
//   dp = &bobj;

    return 0;
}

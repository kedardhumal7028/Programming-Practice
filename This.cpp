#include<iostream>
using namespace std;

/**class Demo
{
public:

    int a;
    float b;
    double c;

    Demo()
    {
        cout<<"inside constructor \n";
    }
    ~Demo()
    {
        cout<<"inside destructor \n";
    }

    void Fun(int i)
    {
        cout<<"inside Fun \n";
        cout<<this -> a<< "\n";
    }
    int gun(int i, int f)
    {
        cout<<"inside gun";
    }

};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.a = 101;
    obj2.a = 201;

    obj1.Fun(11);
    obj2.Fun(11);

    return 0;
}*/


class Demo
{
public:
    int i;
    int f;
    int d;

    /*Demo()
    {
        cout<<"Inside Default Constructor\n";

    }*/

    void fun(int A)
    {
        cout<<"Inside fun\n";
        cout<<this->i<<"\n";
    }
    int gun(int A, int B)
    {
        cout<<"Inside gun\n";
        //cout<<this ->i<<"\n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i = 101;
    obj2.i = 201;

    obj1.fun(11);
    obj2.fun(11);

    return 0;
}

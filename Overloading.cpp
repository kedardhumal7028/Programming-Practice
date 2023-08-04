#include<iostream>>
using namespace std;

class Demo
{
public:

    int Add(int a, int b)
    {
        cout<<"Addition of integer : ";
        return a+b;
    }

    float Add(float a, float b)
    {
        cout<<"Addition of float : ";
        return a + b;
    }

    double Add(double a, double b)
    {
        cout<<"Addition of double : ";
        return a + b;
    }

    int Add(int a, int b, int c)
    {
        cout<<"Addition of 3 integer : ";
        return a+ b + c;
    }

    void Fun(int a, int b)
    {

    }

    void Fun(float a, float b)
    {

    }
};

int main()
{
    int i;
    float f;
    double d;
    Demo obj;
    i = obj.Add(11,21,51);
    cout<< i<<"\n";
    f = obj.Add(15.9f,89.5f);
    cout<< f<<"\n";
    d = obj.Add(10.9,30.5);
    cout<< d<<"\n";
    return 0;
}

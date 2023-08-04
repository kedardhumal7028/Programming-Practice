#include<iostream>
using namespace std;

class Base
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
};

class Derived : public Base
{
public:
    void Fun()
    {
        cout<<"value of pubic i of base: "<<i<<"\n";
    /// cout<<"value of private j of base: "<<j<<"\n";          ///is not accessible for out side class because its private
        cout<<"value of protected k of base: "<<k<<"\n";
    }
};

int main()
{
    Derived obj;
    obj.Fun();
    return 0;
}

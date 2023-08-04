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

    void Fun()
    {
        cout<<"value of public i from fun "<<i<<"\n";
        cout<<"value of public j from fun "<<j<<"\n";
        cout<<"value of public k from fun "<<k<<"\n";
    }
};

int main()
{
    Base bobj;
    cout<<"value of public i "<<bobj.i<<"\n";
   /// cout<<"value of private j "<<bobj.j<<"\n";    is not accessible for out side class because its private
   /// cout<<"value of protected k "<<bobj.k<<"\n";   is not accessible for out side class because its protected

    bobj.Fun();

    return 0;
}

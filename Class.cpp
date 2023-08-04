#include <iostream>
using namespace std;

class Maths
{
public:

    int iNo1;
    int iNo2;

    Maths()
    {
        cout<<"Inside Default Constructor \n";
    }

    Maths(int A, int B)
    {
        cout<<"Inside Parameterized Constructor \n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Maths()
    {
        cout<<"Inside Destructor \n";
    }

    int Addition()
    {
        return iNo1 + iNo2;
    }

    int subtraction()
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    cout<<"Inside Main function \n";
    Maths Obj1;
    Maths Obj2(10,11);

    int ret = 0;
    ret = Obj2.Addition();
    cout<<"Addition is : "<<ret<<" \n";

    ret = Obj2.subtraction();
    cout<<"Subtraction is : "<<ret<<" \n";




}

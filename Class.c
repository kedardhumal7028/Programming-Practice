#include <iostream.h>
using namespace std;

class Maths
{
public :

    int iNo1;
    int iNo2;

    Maths()
    {
        cout<<"Inside Default Constructor \n";

        int iNo1 = 0;
        int iNo2 = 0;
    }

    Maths(int A, int B)
    {
        cout<<"Inside Parameterized Constructor \n";

        int iNo1 = A;
        int iNo2 = B;
    }

    ~Maths()
    {
        cout<<"Inside Destructor \n";
    }
};

int main
{

}

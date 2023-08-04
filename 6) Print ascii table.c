#include<stdio.h>
int main()
{
    int i = 0;
    for(i=0;i<=127;i++)
    {
        printf("\n\t%d   =   %c \n",i, i);
    }
    getchar();
    return 0;
}

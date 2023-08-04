#include<stdio.h>
void main()
{
    int a,b,i;
    a=10, b=20;
    for(i=1; i<=3; i++)
    {
        a=a+10;
        b=b-30;
        printf("%d\t%d\n",a,b);
    }
    getch();
}

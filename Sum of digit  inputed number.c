#include <stdio.h>
main()
{
    int a,b,c=0;
    printf("\n\n==========xoxoxoxoxo=============\n\n");
    printf("\n\t Enter a number");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    c=c+b;
    a=a/10;
    }
    printf("\n\tsum of digits = %d",c);

    printf("\n\n==========xoxoxoxoxo=============\n\n");
    getch();
    return 0;
}

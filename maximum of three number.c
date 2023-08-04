#include <stdio.h>
main()
{
int a,b,c;
printf("\n\n--------------xoxoxoxox--------------------\n\n");

printf("\n\tEnter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a==b)&&(b==c))
    printf("\n\t all three number are equal");

else if((a>=b)&&(a>=c))
    {
    printf("\n\t%d is maximum",a);
    }
else if((b>=a)&&(b>=c))
    {
    printf("\n\t%d is maximum",b);
    }
else if((c>=a)&&(c>=b))
    printf("\n\t%d is maximum",c);

printf("\n\n--------------xoxoxoxox--------------------\n");

getch();
return 0;
}

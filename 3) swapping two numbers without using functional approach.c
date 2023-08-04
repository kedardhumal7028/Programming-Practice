#include<stdio.h>
int main()
{
int a,b;
 printf("\n\n\t==============xoxoxoxoxox=============\n\t");
printf("\n\t Enter numbers a =");
scanf("%d",&a);
printf("\n\t Enter numbers b =");
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("\n\t After swapping a = %d",a);
printf("\n\t After swapping b = %d",b);
printf("\n\n\t==============xoxoxoxoxox=============\n\t");
getch();
return 0;
}

#include <stdio.h>
int main()
{
int a,b,add,sub,mul,div;

printf("\n\n\\t==============xoxoxoxoxox=============\n");
printf("\n\tEnter two numbers :");
scanf("%d%d",&a,&b);
add = a+b;
printf("\n\t the addition of two number is =%d",add);
sub = a-b;
printf("\n\t the subtraction of two number is =%d",sub);
mul = a*b;
printf("\n\t the multiplication of two number is =%d",mul);
div = a/b;
printf("\n\t the divided of two number is =%f",div);
printf("\n\n\\t==============xoxoxoxoxox=============\n");
getch();
return 0;
}

#include<stdio.h>
#include<conio.h>
main()
{
int a,result;
printf("\n\t--------------xoxoxoxox--------------------\n");

printf("\n\n\tEnter given number : \n\n");
scanf("\n%d",&a);

result = a % 2;

if(result == 0)
  printf("\n\tThe entered number is given\n\n");
else
  printf("\n\tThe entered number is odd\n\n");

printf("\n\t--------------xoxoxoxox--------------------");

  getch();
  return 0;
}

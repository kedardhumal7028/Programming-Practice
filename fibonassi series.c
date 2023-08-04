#include<stdio.h>
#include<conio.h>

int main()
{
int no1=0,no2=1,no3=0,cnt=0;
printf("\n\tenter how many number Fibonacci series :");
scanf("%d",&cnt);
printf("\n\t Fibonacci series for cont you give is => ");
printf("%d\t%d",no1,no2);
while (cnt>2)
{
no3=no1+no2;
printf("\n\t%d",no3);
no1=no2;
no2=no3;
cnt--;
}
printf("\n\t thanks");
getch();
return 0;
}

#include<stdio.h>
main()
{
int n,rev=0,rem;
printf("\n\t====================xoxoxoxox==================\n");
printf("\n\t Enter the number");
scanf("%d",&n);
while(n!=0)
 {
  rem = n%10;
  rev = rev*10+rem;
  n /= 10;
 }
printf("\n\t reversed number =%d",rev);
printf("\n\n\t====================xoxoxoxox==================\n");
getch();
return 0;
}

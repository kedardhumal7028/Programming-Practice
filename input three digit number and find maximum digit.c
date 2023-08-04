#include <stdio.h>
main()
{
int a,b,c;
printf("\n===================XOXOXOXOXOXOXOX==================\n\n");
printf("\n\tEnter the numbers");
scanf("%d%d%d",&a,&b,&c);

if(a>=b && b>=c)

printf("\n\t%d is the largest number",a);
if(b>=a && b>=c)
printf("\n\t%d is the largest number",b);
if(c>=a && c>=b)
printf("\n\t%d is the largest number",c);

printf("\n\n===================XOXOXOXOXOXOXOX==================\n\n");
return 0;
}

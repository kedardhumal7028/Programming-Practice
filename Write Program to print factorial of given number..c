#include<stdio.h>
main()
{
int n,i;
printf("\n\t====================xoxoxoxox==================\n");
printf("\n\t Enter the number :");
scanf("%d",&n);
printf("\n\tFactors of %d are :",n);
for(i = 1; i <=n; ++i)
 {
   if (n % i == 0)
   {
    printf("\n\t%d",i);
   }

 }
printf("\n\n\t====================xoxoxoxox==================\n");
getch();
return 0;
}

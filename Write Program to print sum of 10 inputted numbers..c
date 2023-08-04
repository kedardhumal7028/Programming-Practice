#include<stdio.h>
main()
{
 int No=0,sum=0,i=0;
 printf("\n\t===============xoxoxoxoxoxo===============\n");
 printf("\n\tEnter the 10 numbers :\n");
 for( i = 1; i<=10; i++)
 {
   printf("\n\tEnter number %d = ",i);
 scanf("%d",&No);
 sum = sum + No;
 }
 printf("\n\tSum of given 10 numbers %d",sum);
 printf("\n\n\t===============xoxoxoxoxoxo===============\n");
 getch();
 return 0;
}

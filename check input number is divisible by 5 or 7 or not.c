#include<stdio.h>
main()
{
int a=0;
  printf("\n\t--------------xoxoxoxox--------------------\n");

  printf("\n\tEnter any number :");
  scanf("%d",&a);
   if ((a%5==0)&&(a%7==0))
   {
     printf("\n\tGiven Number %d is Divisible by 5 and 7",a);
   }
   else if(a%5==0)
   {
     printf("\n\t Given number %d is only Divisible by 5",a);
   }
   else if(a%7==0)
   {
     printf("\n\tGiven number %d is only Divisible by 7",a);
   }
   else
   {
     printf("\n\tGiven number is not divisible by 5 and 7",a);
   }

 printf("\n\n\t--------------xoxoxoxox--------------------\n");

   getch();
  return 0;
  }

#include<stdio.h>
main()
{
  int i,j,n;
  printf("\n\t Enter a number :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
            printf("*");
   }
   printf("\n");
  }
  getch();
  return 0;
}

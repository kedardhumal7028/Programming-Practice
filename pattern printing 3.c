#include<stdio.h>
main()
{
  int i,j,rows,column;
  printf("\n\t Enter the number of rows :");
  scanf("%d",&rows);
  printf("\n\t Enter the number of column :");
  scanf("%d",&column);
  for(i=1;i<=rows;i++)
  {
   for(j=1;j<=column;j++)
   {
   if (i==1||i==rows||j==1||j==column)
    printf("-");
   else
    printf(" ");
   }
   printf("\n");
  }
getch();
  return 0;
}

#include<stdio.h>
#include<conio.h>

float Calculate_Tot_Per(int *Total,int *P)
{
  int i=0;
  float Percentage=0.0;
   printf("\n----------------------------------------");

  for(i=0;i<3;i++)
    {
      *Total=P[i]+*Total;
    }

    Percentage=(*Total/3);
    return Percentage;

}
int main()
{
   int i,Tot=0;
   float Per=0.0;
   int *Sub_Marks=NULL;

   Sub_Marks=(int*)malloc(sizeof(int)*3);
   printf("\n================XOXOXOXOXOXOXO============\n\n");
   for(i=0;i<3;i++)
    {

      printf("\nEnter %d Subject Marks: ",i+1);
      scanf("%d",&Sub_Marks[i]);

    }

   Per=Calculate_Tot_Per(&Tot,Sub_Marks);

   printf("\nTotal=%d",Tot);
   printf("\nPercentage=%.2f",Per);
      printf("\n\n================XOXOXOXOXOXOXO============\n\n");

   getch();

   return 0;
}

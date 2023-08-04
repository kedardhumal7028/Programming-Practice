#include<stdio.h>
#include<conio.h>

float Calculate_Tot_Per(int *Total,int *Percentage)
{
  int i=0;
  float Perc=0.0;

    for(i=0;i<3;i++)
    {
      *Total=Percentage[i]+*Total;
    }

    Percentage=(*Total/3);


   return Perc;
}
int main()
{
   int i,Tot=0;
   float Percentage=0.0;

   int *Sub_Marks=NULL;

   Sub_Marks=(int*)malloc(sizeof(int)*3);


     for(i=0;i<3;i++)
     {

       printf("\nEnter %d Subject Marks: ",i+1);
       scanf("%d",&Sub_Marks[i]);

     }

     Percentage=Calculate_Tot_Per(&Tot,Sub_Marks);

    printf("\nTotal=%d",Tot);
    printf("\nPercentage=%.2f",Percentage);

    return 0;
}

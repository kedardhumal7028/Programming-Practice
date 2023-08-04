//Calculate the total and percentage
#include<stdio.h>
#include<stdlib.h>
float cal(float,int);
int main()
{
    int i=0;
    int Total=0;
    float Per=0.0;
    float*SubMarks=NULL;

    SubMarks=(float*)malloc(sizeof(float)*3);
    if(SubMarks==NULL)
    {
        printf("Memory cannot be allocate");
    }
    else
    {
        for(i=0;i<3;i++)
        {
            printf("\n Enter the %d Subject Marks:",i+1);
            scanf("%f",&SubMarks[i]);
            Total=Total+SubMarks[i];
        }
    }
    Per=cal(Total,i);
    printf("Total marks of given student are=%d",Total);
    printf("\nPercentage of given student is:%0.2f",Per);
    return 0;
}
float cal(float Total,int i)
{
	float per = (Total/(i*100))*100;

   return per;

}

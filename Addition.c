#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    int iSize = 0;
    int iSum = 0;
    int i = 0;

    printf("Enter how many elements \n");
    scanf("%d",&iSize);

    Arr = (int*) malloc(iSize * sizeof(int));
    printf("Memory Allocation using malloc \n");

    printf("please enter %d elements\n",iSize);

    for(i=0; i<iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    for(i=0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("memory deallocated \n");

    printf("%d",Arr[2]);

    return 0;

}

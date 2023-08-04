#include<stdio.h>
#include<string.h>

void displayTable(char *college[], int n)
{
    int i;
    printf("\nCollege Name\n");
    printf("--------------------\n");
    for (i = 0; i < n; i++)
        printf("%s\n", college[i]);
}

int main()
{
    char *college[10];
    int i;
    printf("Enter the name of 10 colleges: \n");
    for (i = 0; i < 10; i++)
    {
        college[i] = (char *)malloc(20 * sizeof(char));
        scanf("%s", college[i]);
    }
    displayTable(college, 10);
    return 0;
}


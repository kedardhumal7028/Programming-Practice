#include<stdio.h>
int main()
{
  int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    max(a,b);

    getch();
    return 0;
}


int max(int a, int b)
{
     if(a>b)
    {
      printf("%d is a Max number",a);
    }
    else
    {
      printf("%d is a Max number",b);
    }
}

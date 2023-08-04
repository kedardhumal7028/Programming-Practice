#include <stdio.h>
int main()
{
  int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
      printf("%d is a Max number",a);
    }
    else
    {
      printf("%d is a Max number",b);
    }

    getch();
    return 0;
}

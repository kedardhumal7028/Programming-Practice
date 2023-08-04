#include <stdio.h>
void main()

{

  add();
  isEven();
  add();
  add();

}

add()
{
  int a,b,ans;
  printf("\nEnter two numbers :");
  scanf("%d%d",&a,&b);
  ans = a+b;
  printf("The Addition is :%d\n",ans);
}

isEven()
{
  int i;
  printf("\nEnter a number :");
  scanf("%d",&i);
  if(i%2==0)
  printf("Number is Even\n");
  else
  printf("Number is odd\n");
}

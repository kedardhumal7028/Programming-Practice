/** Print 1 to 20 even number **/


#include<stdio.h>
void main()
{
  int i;
  for(i=1; i<=20; i++)
  {
    if(i%2==0)
    {
    printf("%d\n",i);
    }
  }
}

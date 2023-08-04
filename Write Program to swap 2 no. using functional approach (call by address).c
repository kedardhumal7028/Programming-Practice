#include <stdio.h>
#include <conio.h>
void swap(int*, int*);
int main()

{
  int x,y;
  printf("\n\n\t====================xoxoxoxox==================\n");
  printf("\n\tEnter the two numbers x & y = :");
  scanf("%d%d",&x,&y);
  printf("\n\tBefore swapping x=%d,y=%d",x,y);
  swap(&x,&y);
  printf("\n\n\tAfter swaping :x=%d, y=%d",x,y);
  printf("\n\n\t====================xoxoxoxox==================\n");
  getch();
  return 0;
}

  void swap(int *p, int *q)
  {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
  }


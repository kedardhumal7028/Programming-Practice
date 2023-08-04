#include<stdio.h>
main()
{
  char ch;
  printf("\n\t--------------xoxoxoxox--------------------\n");


  printf("\n\tEnter any character :");
  scanf("%c",&ch);
  if ((ch>='A')&&(ch<='Z'))
  {
  printf("\n\t%c it is Upper case character",ch);
  }
  else if((ch>='a')&&(ch<='z'))
  {
  printf("\n\t%c it is Lower case character",ch);
  }
  else
  {
  printf("\n\tplease enter valid character\n\t it is not character");
  }

  printf("\n\n\t--------------xoxoxoxox--------------------\n");
  getch();
  return 0;
}

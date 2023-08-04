#include<stdio.h>
main()
{
    char ch;
    printf("\n\t--------------xoxoxoxox--------------------\n");


    printf("\n\tEnter any character :");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("\n\t%c it is upper case character",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\n\t%c it is lower case character",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\n\t%c is a number",ch);
    }
    else if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
    {
        printf("\n\t%c is a special character",ch);
    }

    printf("\n\n\t--------------xoxoxoxox--------------------\n");
    getch();
    return 0;
}

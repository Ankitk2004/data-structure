#include<stdio.h>
main()
{
    char ch;
    printf("enter a uppercase letter");
    scanf("%c",&ch);
    ch=ch-32;
    printf("%c",ch);
}

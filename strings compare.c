#include<stdio.h>
#include<string.h>
main()
{
    char name[40];
    char name1[40];
     int x;
    gets(name);
    gets(name1);
    x=strcmp(name,name1);
    if(x==0)
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
}

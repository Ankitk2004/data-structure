#include<stdio.h>
#include<string.h>
void read (char name[]);
void display (char name[]);
int length (char name[]);
main()
{
    char name[100];
    int l;
    read (name);
    display(name);
    l=length(name);
    printf("length=%d",l);
}
void read (char name[25])
{
    gets(name);
}
void display (char name[25])
{
    puts(name);
}
int length(char name [25])
{
    int i=0;
   while (name[i]!='\0')
    {
        i++;
    }
    return i;
}


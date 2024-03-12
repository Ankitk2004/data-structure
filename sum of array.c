#include<stdio.h>
void read(int[],int);
void display(int [],int);
int sum (int [],int);
main()
{
    int n,i,g;
    int m[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    g=sum(m,n);
    printf("sum of 1d array elements=%d",g);
}

 void read(int g [100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&g[i]);
    }
}
void display(int m [100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",m[i]);
    }
}
int sum (int m [],int n)
{
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+m[i];
    }
    return s;
}

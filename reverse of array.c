#include<stdio.h>
void read(int[],int);
void display(int [],int);
void reverse (int [],int);
main()
{
    int n,i,g;
    int m[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    reverse(m,n);
    display(m,n);
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
        printf("%d\n",m[i]);
    }
}
void reverse(int m[100],int n)
{
    int i,j,t;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=m[i];
        m[i]=m[j];
        m[j]=t;
    }
}


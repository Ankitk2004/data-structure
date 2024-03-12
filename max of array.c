#include<stdio.h>
void read(int[],int);
void display(int [],int);
void max (int [],int);
main()
{
    int n,i,g;
    int m[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    max(m,n);
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
void max (int m[100],int n)
{
    int res,i;
    res=m[0];
    for(i=0;i<n;i++)
    {
        if(m[i]>res)
        {
            res=m[i];
        }
    }
    printf("max=%d",res);

}


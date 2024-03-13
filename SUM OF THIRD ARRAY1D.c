#include<stdio.h>
void read (int [],int);
void display(int [],int);
void sum(int[],int[],int[],int);
main()
{
    int a[100],b[100],c[100];
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    read(a,n);
    read(b,n);
    display(a,n);
    printf("\n");
    display(b,n);
    sum(a,b,c,n);
    printf("\n");
    display (c,n);

}
void read (int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a [100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void sum(int a[100],int b[100],int c[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
}





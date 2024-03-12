#include<stdio.h>
void read(int[],int);
void display(int [],int);
void lin_search (int [],int,int);
main()
{
    int n,i,g,key;
    int m[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    printf("enter the element to be searched");
    scanf("%d",&key);
    lin_search(m,n,key);
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

void lin_search (int m[],int n,int key)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(key==m[i])
        {
            printf("element=%d",m[i]);
            count++;
        }
    }
    printf("count=%d",count);

}


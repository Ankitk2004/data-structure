#include<stdio.h>
void read(int[],int);
void display(int [],int);
void sort (int [],int);
main()
{
    int n,i,g;
    int m[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    sort(m,n);
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


void sort (int m[100],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(m[j]>m[j+1])
            {
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
            }
        }
    }
}


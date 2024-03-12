#include<stdio.h>
void f_series(int);
main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    f_series(n);
}
void f_series(int n)
{
    int t1=0,t2=1,t3,i;
    printf("%d\n",t1);
    printf("%d\n",t2);
    for(i=3;i<n;i++)
    {
        t3=t1+t2;
        printf("%d",t3);
        t1=t2;
        t2=t3;
    }
}


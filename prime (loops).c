#include<stdio.h>
int is_prime(int);
main()
{
    int n,res;
    printf("enter the value of n");
    scanf("%d",&n);
    res=is_prime(n);
    if(res==0)
    {
        printf(" not  prime");
    }
    else
    {
        printf(" prime");
    }

}
int is_prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           flag=1;
           break;
        }
        if(flag==0)
            return 1;
        else
        {
            return 0;
        }

    }
}

#include<stdio.h>
int arm_num(int);
main()
{
    int n,sum;
    printf("enter the number");
    scanf("%d",&n);
    sum=arm_num(n);
    if(sum==n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not a armstrong");
    }

}
int arm_num(int n)
{
    int ld,sum=0;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;

    }
    return sum;
}

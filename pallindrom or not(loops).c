#include<stdio.h>
int reverse(int);
main()
{
    int n,r;
    printf("enter the value of n");
    scanf("%d",&n);
    r=reverse(n);
    if(r==n)
    {
        printf("pallindrom");
    }
    else
    {
        printf("not a pallindrom");
    }

}
int reverse(int n)
{
    int ld ,rev=0;
    while(n!=0)
 {

    ld=n%10;
    rev=rev*10+ld;
    n=n/10;
 }
 return rev;
}



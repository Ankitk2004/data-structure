#include<stdio.h>
void reverse(int);
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    int ld ,rev=0;
    while(n!=0)
 {

    ld=n%10;
    rev=rev*10+ld;
    n=n/10;
 }
 printf("rev=%d",rev);
}


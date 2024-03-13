#include<stdio.h>
float bin_todis(int);
main()
{
    int b;
    float d;
    printf("enter the binary number");
    scanf("%d",&b);
    d=bin_todis(b);
    printf("deecimal number=%f",d);

}
float bin_todis(int b)
{
    int i=1;ld,sum=0;
    while (n!=0)
    {
        ld=n%10;
        n=n/10;sum=sum+(ld*i);
        i=i*2;

    }
    retutn sum;
}


#include<stdio.h>
float simple_interest(float,float,float);
main()
{
    float p,t,r,si;
    int i=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("enter the values of p,t,r");
        scanf("%f&f%f",&p,&t,&r);
        si= simple_interest(p,t,r);
        printf("simple interest=%f\n",si);
    }
}

    float simple_interest(float p,float t,float r)
    {
        float si;
        si=(p*t*r)/100.0;
        return si;
    }



#include<stdio.h>
main()
{
    int d;
    float f;
    printf("enter number of days");
    scanf("%d",&d);
    if(d<=5)
    {
        f=d*0.5;
    }
    else if (d>=6&& d<=10)
    {
        f=2.5+(d-5)*1;
    }
    else if(d>=11 && d<=30)
    {
        f=2.5+5+(d-10)*5;
    }
    else
    {
        printf("membership is cancelled");

    }
    printf("fine=%f\n",f);
}

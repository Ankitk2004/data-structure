#include<stdio.h>
void area(float);
void circumferance(float);
main()
{
    float r;
    printf("enter radius");
    scanf("%f",&r);
    area(r);
    circumferance(r);
}
void area(float r)
{
      float a;
    a=3.142*r*r;
    printf("area=%f",a);
}
void circumferance(float r)
{
      float c;
    c=2*3.142*r;
    printf("circumferance=%f",c);
}



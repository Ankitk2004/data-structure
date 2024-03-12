#include<stdio.h>
float series (int);
main()
{
    int n;
    float s;
    printf("enter the value of n");
    scanf("%d",&n);
    s=series(n);
    printf("sum=%f",s);

}
float series(int n)
{
    int i,fact=1;
    float sum=0;
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
       sum=sum+(1.0/fact);
   }
   return sum;



}





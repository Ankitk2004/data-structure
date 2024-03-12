#include<stdio.h>
float sum(float,float);
float sub(float,float);
float mul(float,float);
float div (float,float);
int mod(int,int);
main()
{
    float n1,n2;
    char op;
    float res;
    printf("enter op and two numbers");
    scanf("%c%f%f",&op,&n1,&n2);
    switch(op)
    {
        case'+':res=sum(n1,n2);
        break;
         case'-':res=sub(n1,n2);
        break;
         case'*':res=mul(n1,n2);
        break;
        case '/':if(n2!=0)
             {
                 res=div(n1,n2);
             }
             else
             {
                 printf("error");
                 exit(0);
             }
         case'%':res=mod(n1,n2);
         break;
    }
         printf("res=%f",res);

    }
     float sum(float n1,float n2)
     {
         float c;
         c=n1+n2;
         return c;
     }
     float sub(float n1,float n2)
     {
         float c;
         c=n1-n2;
         return c;
     }
     float mul(float n1,float n2)
     {
         float c;
         c=n1*n2;
         return c;
     }
     float div (float n1,float n2)
     {
         float c;
         c=n1/n2;
         return c;
     }
           int mod(int n1,int n2)
     {
         int c;
         c=n1%n2;
         return c;
     }







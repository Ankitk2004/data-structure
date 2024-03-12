#include<stdio.h>
void  dis_toys(float);
void dis_clothes (float);
main()
{
    float amt;
    char ch;
    printf("enter the character and amount");
    scanf("%c%f",&ch,&amt);
    switch(ch)
    {
        case 'T':dis_toys(amt);
        break;
        case 'C':dis_clothes(amt);
        break;
    }

}
    void  dis_toys(float amt)
    {
        float dis;
        if(amt<=1000)
        {
            printf("no discount");
        }
        else if(amt>1000)
        {
            dis=(amt-1000)*0.7;
            amt=amt-dis;
            printf("amt=%f",amt);
        }
    }
    void  dis_clothes(float amt)
    {
        float dis;
        if(amt<5000)
        {
            dis=0.03*amt;
            amt=amt-dis;
        }
        else if(amt>5000)
        {
            dis=(amt-5000)*0.050;
            amt=amt-dis;

        }
        printf("amt=%f\ndis=%f",amt,dis);


    }



















#include<stdio.h>
int main()
{
    int u;
    float a,b;
    scanf("%d",&u);
    if(u<=199)
    {
        b=(u*1.20);
    }
    else if(u>200 && u<=400)
    {
        b=(u*1.50);
    }
    else if(u>400 && u<=600)
    {
        b=(u*1.80);
    }
    else 
    {
        b=(u*2.000);
    }
    if (b<=400) a=b+100;
    else a=b+(0.15*b);
    printf("%.2f",a);
}
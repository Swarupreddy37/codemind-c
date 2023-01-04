#include<stdio.h>
int main()
{
    int n,d,h;
    float gs;
    scanf("%d",&n);
    if (n<=10000)
    {
        d=(80*n)/100;
        h=(20*n)/100;
        gs=n+h+d;
        printf("%.2f",gs);
    }
    else if (n<=20000)
    {
    d=(90*n)/100;
    h=(25*n)/100;
    gs=n+d+h;
    printf("%.2f",gs);
    }
    else
    {
        d=(95*n)/100;
        h=(30*n)/100;
        gs=n+d+h;
        printf("%.2f",gs);
    }
}
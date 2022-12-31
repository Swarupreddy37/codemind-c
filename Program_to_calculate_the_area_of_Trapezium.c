#include<stdio.h>
int main()
{
    int a,b,h;
    float Area;
    scanf("%d%d%d",&a,&b,&h);
    Area=0.5*h*(a+b);
    printf("%.4f",Area);
}
#include<stdio.h>
int main()
{
    float bs,h,d,p,gs;
    scanf("%f%f%f",&bs,&h,&d);
    p=(12*bs)/100;
    gs=bs+h+p+d;
    printf("%.2f
%.2f",p,gs);
}
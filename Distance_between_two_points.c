#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float Dis;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Dis=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.4f",Dis);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    float i,a=0.00;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        a=(a+sqrt(i));
    }
    printf("%.2f",a);
}
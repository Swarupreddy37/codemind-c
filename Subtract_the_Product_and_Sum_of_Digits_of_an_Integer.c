#include<stdio.h>
int main()
{
    int n,pro,sum,rem,dif,p;
    scanf("%d",&n);
    sum=0,pro=1;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n=n/10;
    }
    p=(sum>pro)?(sum-pro):(pro-sum);
    printf("%d",p);
}
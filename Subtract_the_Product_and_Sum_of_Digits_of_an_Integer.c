#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,rem,dif;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    dif=pro-sum;
    printf("%d",dif);
}
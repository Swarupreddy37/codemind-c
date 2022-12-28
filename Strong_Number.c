#include<stdio.h>
int main()
{
    int n,tem,a,i,rem,pro,sum;
    scanf("%d",&n);
    tem=n;
    sum=0;
    while(n!=0)
    {
        rem=n%10;
        a=rem;
        pro=1;
        for(i=a;i>=1;i--)
        {
            pro*=i;
        }
        sum+=pro;
        n=n/10;
    }
    if(sum==tem) printf("The number %d is a strong number",tem);
    else printf("The number %d is not a strong number",tem);
}
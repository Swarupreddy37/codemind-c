#include<stdio.h>
int main()
{
    int n,rem,rev,tem;
    scanf("%d",&n);
    rev=0;
    tem=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==tem)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
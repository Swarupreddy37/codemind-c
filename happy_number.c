#include<stdio.h>
int main()
{
    int n,rem,sum=0,s;
    scanf("%d",&n);
    while(n>9)
    {
        while(n!=0)
        {
            rem=n%10;
            s=rem*rem;
            sum=sum+s;
            n=n/10;
        }
        if(sum>9)
        {
            n=sum;
            sum=0;
        }
        else
        {
            break;
        }
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
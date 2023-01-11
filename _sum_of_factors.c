#include<stdio.h>
int main()
{
    int n,i,c=0,o;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        c=c+i;
    }
    printf("%d",c);
}
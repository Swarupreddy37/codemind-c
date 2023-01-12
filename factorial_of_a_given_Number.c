#include<stdio.h>
int main()
{
    int n,F=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        F=F*i;
    }
    printf("%d",F);
}

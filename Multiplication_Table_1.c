#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}
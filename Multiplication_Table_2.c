#include<stdio.h>
int main()
{
    int n,m,i,p;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}
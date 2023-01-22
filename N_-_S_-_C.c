#include<stdio.h>
int main()
{
    int n,m,i,s,c;
    scanf("%d%d",&n,&m);
    for(i=(n+1);i<m;i++)
    {
        s=(i*i);
        c=(i*i*i);
        printf("%d %d %d
",i,s,c);
    }
}
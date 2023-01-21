#include<stdio.h>
int main()
{
    int n,i,s,e,o;
    scanf("%d%d%d",&n,&s,&e);
    for(i=s;i<=e;i++)
    {
        o=(n*i);
        printf("%d x %d = %d
",n,i,o);
    }
}
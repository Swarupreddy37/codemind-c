#include<stdio.h>
int main()
{
    int n,v,i,o;
    scanf("%d",&n);
    v=n/2;
    for(i=1;i<=v;i++)
    {
      o=2*i-1;
      printf("%d ",o);
    }
}
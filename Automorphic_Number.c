#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,s;
    scanf("%d",&n);
    s=n*n;
    a=(log10(n)+1);
    b=pow(10,a);
    m=s%b;
    if(m==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}
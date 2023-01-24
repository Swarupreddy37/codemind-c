#include<stdio.h>
int main()
{
    int n,s,rem1,rev1=0,rem2,rev2=0,rs;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        rem1=n%10;
        rev1=((rev1*10)+rem1);
        n=n/10;
    }
    rs=(rev1*rev1);
    while (rs!=0)
    {
        rem2=rs%10;
        rev2=((rev2*10)+rem2);
        rs=rs/10;
    }
    if(rev2==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
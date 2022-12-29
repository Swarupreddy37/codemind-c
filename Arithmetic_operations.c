#include<stdio.h>
int main()
{
    int a,b,S,D,P,Q,R;
    scanf("%d%d",&a,&b);
    S=a+b;
    D=a-b;
    P=a*b;
    Q=a/b;
    R=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",S,D,P,Q,R);
}
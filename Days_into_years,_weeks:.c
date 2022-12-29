#include<stdio.h>
int main()
{
    int D,Y,W;
    scanf("%d",&D);
    Y=D/365;
    W=(D%365)/7;
    printf("%d
",Y);
    printf("%d
",W);
}
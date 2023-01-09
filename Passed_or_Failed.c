#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    if (a1>34 && a2>34 && a3>34 && a4>34 && a5>34)
    printf("PASSED");
    else
    printf("FAILED");
}
#include<stdio.h>
int main()
{
    char name;
    scanf("%c",&name);
    if(name=='V') printf("Violet");
    else if(name=='I') printf("Indigo");
    else if(name=='G') printf("Green");
    else if(name=='Y') printf("Yellow");
    else if(name=='O') printf("Orange");
    else if(name=='R') printf("Red");
    else printf("-1");
}
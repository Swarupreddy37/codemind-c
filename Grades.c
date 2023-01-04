#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,s,P;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    s=n1+n2+n3+n4+n5;
    P=(s*100)/500;
    if (P>=90) printf("Grade A");
    else if(P>=80) printf("Grade B");
    else if(P>=70) printf("Grade C");
    else if(P>=60) printf("Grade D");
    else if(P>=40) printf("Grade E");
    else printf("Grade F");
}
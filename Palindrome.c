#include<stdio.h>
int main()
{
    int n,rem,rev=0,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(o==rev) printf("Palindrome");
    else printf("Not Palindrome");
}
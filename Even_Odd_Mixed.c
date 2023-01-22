#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,a=0,b=0,c;
    scanf("%d",&n);
    c=(log10(n)+1);
    while(n!=0)
    {
       rem=n%10;
       if(rem%2==0)
       {
           a++;
       }
       else
       {
           b++;
       }
       n=n/10;
    }
    if(a==c)
    {
        printf("Even");
    }
    else if(b==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
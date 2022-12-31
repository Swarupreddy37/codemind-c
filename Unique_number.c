#include<stdio.h>
int main()
{
    int n,rem1,rem2,p,c;
    scanf("%d",&n);
    c=0;
    while(n!=0)
    {
        
        rem1=n%10;
        p=n/10;
        while(p!=0)
        {
            rem2=p%10;
            if(rem2==rem1)
            {
                c++;
            }
            p=p/10;
        }
        n=n/10;
    }
    if(c==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}
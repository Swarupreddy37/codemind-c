#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,sum1,sum2,p,q,sum,x;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    sum1=(a1+a2+a3);
    sum2=(b1+b2+b3);
    sum=sum1+sum2;
   
    if(sum1<150 && sum2<150) printf("NO");
    else if(sum1>=150 && sum2>=150)
    {
        p=sum+(2*d);
        x=sum+c;
        if(x>=p) printf("NO");
        else printf("YES");
    }
    else
    {
    p=sum+(2*d);
    q=(sum+d+c);
     if(q>=p) printf("NO");
    else printf("YES");
    }
}
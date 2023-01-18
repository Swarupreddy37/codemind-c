#include<stdio.h>
int main()
{
    int n,i,j,c,b=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && a[j]!=0)
            {
                c++;
                if(i!=j) a[j]=0;
            }
        }
        if(c==1)
        {
            b++;
        printf("%d ",a[i]);
        }
    }
    if(b==0) printf("-1");
}
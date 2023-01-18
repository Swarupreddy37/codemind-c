#include<stdio.h>
int main()
{
    int n,i,j,c,p=0,q;
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
    if(c>1)
    {
    q=c/2;
    p=p+q;
    }
    }
    printf("%d",p);
}
#include <stdio.h>

int main() 
{
    int i,s,c=0;
    int a[100];
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        s=a[i]*a[i];
        printf("%d
",s);
    }
}
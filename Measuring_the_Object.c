#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x+y)
    {
        printf("YES");
        return 0;
    }
    else if(w==z+y)
    {
        printf("YES");
         return 0;
    }
    else if(w==x+z)
    {
        printf("YES");
         return 0;
    }
    if(w==x)
    {
        printf("YES");
         return 0;
    }
    if(w==y)
    {
        printf("YES");
         return 0;
    }
    if(w==z)
    {
        printf("YES");
         return 0;
    }
    else
    {
        printf("NO");
         return 0;
    }
}
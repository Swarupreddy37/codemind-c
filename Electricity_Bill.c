#include<stdio.h>
int main()
{
    int u;
    float b,s,t;
    scanf("%d",&u);
    if(u<=199)
    {
        b=u*1.20;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %.2f
",b);
    }
    else if(u>=200 && u<400)
    {
        b=u*1.40;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %.2f
",b);
    }
    else if(u>=400 && u<600)
    {
        b=u*1.60;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %.2f
",b);
    }
    else if(u>=600 && u<800)
    {
        b=u*1.80;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %.2f
",b);
    }
    else
    {
        b=u*2.00;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %.2f
",b);
    }
    if(b>400)
    {
        s=(b*15)/100;
        t=b+s;
        printf("Surcharge: %.2f
",s);
        printf("Total Amount: %.2f",t);
    }
    else
    {
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f",b);
    }
}
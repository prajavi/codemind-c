#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    if(u<=199)
    {
        double b=u*1.20;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %0.2lf",b);
    }
     else if(u>=200 && u<=285)
    {
        double b=u*1.40;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %0.2lf",b);
    }
    else if(u>285 && u<400)
    {
        double b=u*1.40,s=b*0.15;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: %0.2lf
",s);
        printf("Total Amount: %0.2lf",s+b);
    }
    else if(u>=400 && u<600)
    {
        double b=u*1.60,s=b*0.15;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: %0.2lf
",s);
        printf("Total Amount: %0.2lf",s+b);
    }
    else if(u>=600 && u<800)
    {
        double b=u*1.80,s=b*0.15;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: %0.2lf
",s);
        printf("Total Amount: %0.2lf",s+b);
    }
    else if(u>=800)
    {
        double b=u*2.00,s=b*0.15;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %0.2lf
",b);
        printf("Surcharge: %0.2lf
",s);
        printf("Total Amount: %0.2lf",s+b);
    }
    
}
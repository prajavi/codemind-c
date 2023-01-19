#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    e=a/d;
    f=a%d;
    if(f==0)
    {
        printf("%d",e);
    }
    else if(f!=0)
    {
        printf("%d",e+1);
    }
    
}
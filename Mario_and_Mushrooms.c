#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n%3;
    if(a==1)
    {
        printf("HUGE");
    }
    else if(a==2)
    {
        printf("SMALL");
    }
    else 
    {
       printf("NORMAL");
    }
}
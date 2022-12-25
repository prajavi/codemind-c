#include<stdio.h>
int main()
{
    int n,q,s=0,p=1,r;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
        p=p*r;
    }
    printf("%d",p-s);
}
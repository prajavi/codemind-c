#include<stdio.h>
int main()
{
    int n,k,r,s=0;
    scanf("%d",&n);
    k=n*n;
    int p=k;
    while(k>0)
    {
        r=k%10;
        k=k/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}
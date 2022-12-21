#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,p,q=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        q=q+(i*i);
    }
    p=s*s;
    printf("%d",p-q);
    
}
#include<stdio.h>
int main()
{
    int N,a[N],i,s=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
    
}
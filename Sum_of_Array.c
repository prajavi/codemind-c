#include<stdio.h>
int main()
{
    int N,i,s=0,a[N];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    
}
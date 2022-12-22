#include<stdio.h>
int main()
{
    int mn,mx,n,i,c=0;
    scanf("%d%d",&mn,&mx);
    for(i=mn;i<=mx;i++)
    {
        if(i%2==0&& i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
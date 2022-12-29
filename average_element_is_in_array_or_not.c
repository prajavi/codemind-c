#include<stdio.h>
int main()
{
    int i,N,a[N],avg,s=0,flag=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        s=s+a[i];
    }
    avg=s/N;
    for(i=0;i<N;i++)
    {
        if(a[i]==avg)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}
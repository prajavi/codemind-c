#include<stdio.h>
int main()
{
    int N,a[N],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    for(i=0;i<N;i++)
    {
        if(s==a[i])
      {
        printf("True");
        return 0 ;
      }
    
    }
    printf("False");
    
    
}
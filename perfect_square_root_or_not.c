#include<stdio.h>
int main()
{
    int n,i,flg=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
      if(i*i==n)
      {
          printf("True");
          flg=1;
          break;
      }
      
    }
    if(flg==0)
    {
    printf("False");
    }
    
}
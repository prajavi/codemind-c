#include <stdio.h>

int main() 
{
    int num, i = 1,max,min;
    scanf("%d%d%d",&num,&min,&max);
    for(i=min;i<=max;i++)
    {
        printf("%d x %d = %d
", num, i, num * i);
    }
}
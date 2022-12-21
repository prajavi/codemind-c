#include <stdio.h>

int main() 
{
    int num, i = 1,max;
    scanf("%d%d", &num,&max);
    for(i=1;i<=max;i++)
    {
        printf("%d x %d = %d
", num, i, num * i);
    }
}
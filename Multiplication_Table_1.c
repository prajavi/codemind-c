#include <stdio.h>

int main() 
{
    int num, i = 1,max;
    scanf("%d", &num);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
", num, i, num * i);
    }
}
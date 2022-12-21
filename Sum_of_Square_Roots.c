#include<stdio.h>
#include<math.h>
int main()
{
    float i,min,max,s=0;
    scanf("%f%f",&min,&max);
    for(i=min;i<=max;i++)
    {
        s=s+pow(i,0.5);
    }
    printf("%0.2f",s);
}
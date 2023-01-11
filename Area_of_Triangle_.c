#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c;
    float x,ar;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    ar=pow(x,0.5);
    printf("%0.2f",ar);
    
}
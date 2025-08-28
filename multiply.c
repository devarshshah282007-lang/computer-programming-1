#include <stdio.h>

int main() 
{
    float a,b,c;
    printf("enter two numbers:");
    scanf("%f%f" ,&a,&b);
    c=a*b;
    printf("%.2f*%.2f=%.2f" ,a,b,c);
}

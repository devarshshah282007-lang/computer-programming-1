#include <stdio.h>

void main() 
{
    float b,kb,mb,gb;
    
    printf("Enter amount in bytes");
    scanf("%f", &b);
    kb=b/1000.0;
    printf("%.2f/1000.0=%.2f\n",b,kb);
    mb=b/1000000.0;
    printf("%.2f/1000000.0=%.2f\n" ,b,mb);
    gb=b/1000000000.0;
    printf("%.2f/1000000000.0=%.2f\n" ,b,gb);

}

#include <stdio.h>

void main() 
{
    float g,kg;
    
    printf("Enter amount in kilograms");
    scanf("%f", &kg);
    g=kg*1000;
    printf("%.2f*1000=%.2f",kg,g);

}

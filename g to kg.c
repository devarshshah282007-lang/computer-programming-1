#include <stdio.h>

void main() 
{
    float g,kg;
    
    printf("Enter amount in grams");
    scanf("%f", &g);
    kg=g/1000.0;
    printf("%.2f/1000.0=%.2f",g,kg);

}

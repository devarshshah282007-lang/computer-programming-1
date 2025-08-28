#include <stdio.h>

void main() 
{
    float p,d;
    
    printf("Enter amount in dollars");
    scanf("%f", &d);
    p=70*d/48;
    printf("%.2f*70/48=%.2f",d,p);

}

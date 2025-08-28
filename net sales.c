#include <stdio.h>

void main() 
{
    float s,g,d;
    
    printf("Enter gross sales\n");
    scanf("%f",&g);
    d=0.1*g;
    s=g-d;

    printf("%.2f-%.2f=%.2f" ,g,d,s);

}

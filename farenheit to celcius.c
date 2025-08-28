#include <stdio.h>

void main() 
{
    float f,c;
    
    printf("Enter temperature in farenhit");
    scanf("%f",&f);
    c=(5/9.0)*f-32;
    
    
    printf("%.2f*5/9-32=%.2f\n" ,f,c);

}

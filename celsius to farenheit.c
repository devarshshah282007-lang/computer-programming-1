#include <stdio.h>

void main() 
{
    float f,c;
    
    printf("Enter temperature in celcius");
    scanf("%f",&c);
    f=(9/5.0)*c+32;
    
    
    printf("%f*9/5+32=%f\n" ,c,f);

}

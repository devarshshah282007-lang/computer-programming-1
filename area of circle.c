#include <stdio.h>

void main() 
{
    float a,r;
    
    printf("Enter radius\n");
    scanf("%f",&r);
    a=(22/7.0)*r*r;

    printf("%.2f*%.2f*(22/7)=%.2f" ,r,r,a);

}

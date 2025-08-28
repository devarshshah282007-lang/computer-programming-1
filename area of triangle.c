#include <stdio.h>

void main() 
{
    float a,h,l;
    
    printf("Enter height\n");
    scanf("%f",&h);
    printf("Enter length\n");
    scanf("%f" ,&l);
    a=(h*l)/2.0;

    printf("(%.2f*%.2f*)/2.0=%.2f" ,h,l,a);

}

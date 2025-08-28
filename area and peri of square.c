#include <stdio.h>

void main() 
{
    float a,l,p;
    
    printf("Enter length\n");
    scanf("%f",&l);
    a=l*l;
    p=4*l;
    printf("%.2f*%.2f=%.2f\n" ,l,l,a);
    printf("%.2f*4=%.2f\n" ,l,p);

}

#include <stdio.h>

void main() 
{
    float a,l,b,p;
    
    printf("Enter breadth\n");
    scanf("%f",&b);
    printf("Enter length\n");
    scanf("%f" ,&l); 
    a=l*b;
    p=2*(l+b);
    printf("%.2f*%.2f=%.2f\n" ,l,b,a);
    printf("(%.2f+%.2f)*2=%.2f\n" ,l,b,p);

}

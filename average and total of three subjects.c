#include <stdio.h>

void main() 
{
    float a,b,c,d,e;
    
    printf("Enter 1st subject marksr\n");
    scanf("%f",&a);
    printf("Enter 2nd subject marks \n");
    scanf("%f" ,&b);
    printf("Enter 3rd subject marks\n");
    scanf("%f" ,&c);
    d=(a+b+c)/3.0;
    e=a+b+c;
    printf("(%.2f+%.2f+%.2f)/3.0=%.2f\n" ,a,b,c,d);
    printf("%.2f+%.2f+%.2f=%.2f\n" ,a,b,c,e);

}

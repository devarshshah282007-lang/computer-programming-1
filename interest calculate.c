#include <stdio.h>

void main() 
{
    float p,r,n,i;
    
    printf("Enter principle amount\n");
    scanf("%f",&p);
    printf("Enter rate of interest\n");
    scanf("%f" ,&r);
    printf("enter amount of time\n");
    scanf("%f" ,&n);
    i=p*r*n/100.0;
    
    printf("%.2f*%.2f*%.2f/100.0=%.2f" ,p,r,n,i);

}

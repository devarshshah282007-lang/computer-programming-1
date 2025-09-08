#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter gross salary\n");
    scanf("%f",&a);
    if(a>10000)
    {
    b=a+(0.1*a)-(0.03*a);
    printf("The net salary is %f \n ",b);
    }
    else if(a>5000 & a<10000)
    {
     b=a+(0.07*a)-(0.02*a);
    printf("The net salary is %f \n",b);
    }
}

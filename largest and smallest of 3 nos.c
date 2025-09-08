#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter first number\n:");
scanf("%f",&a);
printf("Enter second number\n:");
scanf("%f" ,&b);
printf("Enter third number\n:");
scanf("%f" ,&c);
if (a>b & a>c)
{
printf("%f is the largest\n",a);
}
else if (b>a & b>c)
    {
printf("%f is the largest\n",b);
    }
else
{
printf("%f is the largest\n",c);
    }
if (a<b & a<c)
{
printf("%f is the smallest\n",a);}
else if (b<a & b<c)
{
printf("%f is the smallest\n",b);}
else
printf("%f is the smallest\n",c);
}

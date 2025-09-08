#include<stdio.h>
void main()
{
    int a,b;
printf("Enter first number\n:");
scanf("%d",&a);
printf("Enter second number\n:");
scanf("%d" ,&b);
if(a>b)
{
printf("%d is greater than %d \n",a,b);
printf("%d is smaller than %d \n",b,a);
}
else
{
printf("%d is greater than %d \n",b,a);
printf("%d is smaller than %d \n" ,a,b);
}

}

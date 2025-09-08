#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter marks of first subject \n:");
    scanf("%d",&a);
    printf("Enter marks of second subject \n:");
    scanf("%d" ,&b);
    printf("Enter marks of third subject \n:");
    scanf("%d" ,&c);
    d=(a+b+c)/3;
    if(a<35 || b<35 || c<35)
    {
        printf("You are failed \n");
        }
   else if(d>=70)
{
    printf("Distinction \n");
}
else if(d>=60 & d<70)
{
    printf("First \n");
}
else if (d>=50 & d<60)
{
    printf("Second \n");
}
else if (d>=35 & d<50)
{
    printf("Third class \n");
}
else
{
    printf("Fail \n");
}
}

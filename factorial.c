#include <stdio.h>

 int main() 
{
    int n,i,a=1;
    printf("Enter a number\n :");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
       a=a*i;
    }
    printf("Factorial of the given no is %d\n",a);
    }
   

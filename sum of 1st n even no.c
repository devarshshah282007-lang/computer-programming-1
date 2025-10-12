#include <stdio.h>

 int main() 
{
    int n,i,a=0;
    printf("Enter a number\n :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
       a=a+2*i;
    }
    printf("%d\n",a);
    }
   

#include <stdio.h>

 int main() 
{
    int n,i,a=0;
    printf("Enter a number\n :");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
       a=a+i;
    }
    printf("%d\n",a);
    }

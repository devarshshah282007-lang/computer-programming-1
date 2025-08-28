#include <stdio.h>

void main() 
{
    int M,H,m;
    
    
    printf("Enter time in hours \nAnd enter minutes");
    scanf("%d%d", &H,&M);

    
    m=60*H+M;

    printf("%d hours and %d minutes= %d minutes\n",H,M,m);

}

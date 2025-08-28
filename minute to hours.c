#include <stdio.h>

void main() 
{
    int minutes,hours,remaining_minutes;
    printf("Enter time in minutes:");
    scanf("%d" ,&minutes);
    hours=minutes/60;
    remaining_minutes=minutes %60;
    printf("%d minutes= %d hours and %d remaining_minutes\n" ,minutes,hours,remaining_minutes);
    
}

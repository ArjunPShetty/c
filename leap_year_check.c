#include <stdio.h>

int main() 
{
    int c;
        printf("Enter the year: ");
    scanf("%d",&c);
    if(c%4==0 && c%100!=0 || c%400==0)
        printf("%d is a leap year",c);
    else
        printf("%d is not a leap year",c);
    return 0;
}
#include <stdio.h>

int main() {
int n;
printf("Enter the day number (1-7): ");
scanf("%d", &n);
{
    switch(n)
    {
        case 1: printf("today is Monday\n"); break;
        case 2: printf("today is Tuesday\n"); break;
        case 3: printf("today is Wednesday\n"); break;
        case 4: printf("today is Thursday\n"); break;
        case 5: printf("today is Friday\n"); break;
        case 6: printf("today is Saturday\n"); break;
        case 7: printf("today is Sunday\n"); break;

        default: printf("Invalid day number\n");
    }
}
return 0;
}
#include <stdio.h>

int main() {
int n;
    printf("Enter the marks scored : ");
scanf("%d",&n);
if(n>=95&&n<=100)
    printf("%d is A grade",n);
else if(n>=75&&n<=89)
    printf("%d is B grade",n);
else if(n>=60&&n<=74)
    printf("%d is C grade",n);
else if(n<60)
    printf("%d is D grade",n);

return 0;
}
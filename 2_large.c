#include <stdio.h>

int main() {
int a, b, c;
    printf("Enter the Three number : ");
scanf("%d%d%d",&a,&b,&c);
if((a>b && a<c)||(a<b && a>c))
    printf("%d is 2nd largest",a);
else if((b>a && b<c)||(b<a && b>c)) 
    printf("%d is 2nd largest",b);
else if((c>a && c<b)||(c<a && c>b))
    printf("%d is 2nd largest",c);
return 0;
}
#include <stdio.h>
int main() 
{
 int n,m=0;

 printf("Enter the Number ");
 scanf(" %d", &n);
 int t=n;
 while(n>0)
{
    m=m*10+n%10;
    n=n/10;
}
if (t==m)
printf("%d\n is a palindroma",m);
else
printf("%d\n is a not palindroma",m);
return 0;
}
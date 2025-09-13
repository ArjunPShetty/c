#include <stdio.h>
int main() 
{
int n,a=0;
printf("Enter the Number ");
scanf(" %d", &n);
for (int i=1; i<=n; i++)
{
    a+=i;
}
printf("%d\n",a);
return 0;
}
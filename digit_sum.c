#include <stdio.h>
int main() 
{
 int n,sum=0,c,t;
 printf("Enter the Number ");
 scanf(" %d", &n);
 while(n>0)
{
    t=n%10;
    sum+=t;
    n=n/10;
}
printf("%d\n",sum);
return 0;
}
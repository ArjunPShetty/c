#include <stdio.h>
#include <math.h>
int main() {
int n,c=0,s=1;
printf("Enter the number : ");
scanf("%d",&n);
int t=n;
while(t>0)
{
    c++;
    t/=10;
}
t=n;
while(t>0)
{
    s=s+pow(t%10,c);
    t/=10;
}
if(s==n)
{
    printf("%d is Armstrong number",n);
}
else
{
    printf("%d is Not an Armstrong number",n);
}
return 0;
}
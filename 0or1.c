#include <stdio.h>
#include <math.h>
int main() {
int n,c=0,r=0;
printf("Enter the number : ");
scanf("%d",&n);
while(n>0)
{
r=n%2;
if(r==1)
c++;
n/=2;
}
printf("%d",c);
return 0;
}

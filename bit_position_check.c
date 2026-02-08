#include <stdio.h>
#include <math.h>
int main() {
int n,c=0,r=0,k;
printf("Enter the number : ");
scanf("%d",&n);
printf("Enter the position : ");
scanf("%d",&k);
while(n>0)
{
r=n%2;
c++;
if(c==k)
 n/=2;
    break;
}
printf("%d",r);
return 0;
}

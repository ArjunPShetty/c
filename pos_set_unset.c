#include <stdio.h>
#include <math.h>
int main() {
int n,c=0,r=0,k;
printf("Enter the number : ");
scanf("%d",&n);
printf("Enter the postion : ");
scanf("%d",&k);
if(((n>>(k-1))&1)==1)
printf("set");
else
printf("unset");
return 0;
}

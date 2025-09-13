#include <stdio.h>
#include <math.h>
int main() {
int n,s=0;
printf("Enter the number : ");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
    if(n%i==0)
    {
        s+=i;
    }
}
if(n==s)
{
    printf("%d is Perfect number",n);
}
else
{
    printf("%d is Not a Perfect number",n);
}
return 0;
}

#include<stdio.h>
void power(int);
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    power (n);
}
void power(int n)
{
    int res=0;
    for(int i=1;i<=n;i*=2)
{
    if(i==n)
    {
        res=1;
    }
}
if (res==1)
    printf("%d is a power of 2\n",n);
else
    printf("%d is not a power of 2\n",n);
}

#include<stdio.h>
void sum(int);
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    sum (n);
}
void sum(int n)
{
int sum=0;
 while(n>0)
{
    sum=sum+n%10;
    n=n/10;
}
printf("%d\n",sum);
}
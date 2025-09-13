#include<stdio.h>
int reverse(int );
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int r=reverse(n);
    printf("%d",r);
}

int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

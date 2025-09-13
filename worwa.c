#include<stdio.h>
void add(int,int);
int main()
{
    int a=5,b=6;
    add(a,b);
}
void add(int a,int b)
{
    printf("%d",a+b);
}
#include<stdio.h>
int add(void);
int main()
{
    int ans=add( );
    printf("%d",ans);
}
int add()
{
    int a=10;
    int b=20;
    return a+b;
}
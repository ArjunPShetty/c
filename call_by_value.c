#include<stdio.h>
void fun(int n);
int main(){
    int n=5;
    fun(n);
    printf("%d\n",n);
}
void fun(int n)
{
    n=6;
}
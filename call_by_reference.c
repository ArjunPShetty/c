#include<stdio.h>
void fun(int *p);
int main(){
    int n=5;
    fun(&n);
    printf("%d\n",n);
}
void fun(int *p)
{
    *p=6;
}
#include<stdio.h>
int main(){
    int n=5;
    int *p=&n;
    int **Q=&p;
    int ***r=&Q;
    printf("%d\n",r);
    return 0;
}

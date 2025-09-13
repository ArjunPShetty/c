#include <stdio.h>

int main() {
    int n = 1004,sum=0;
    while(n>0)
    {
        int r=n%10;
        if(r==0)
        sum=sum*10+5;
        else
        sum=sum*10+r;
        n=n/10;
    }
    while(sum>0)
    {
        n=n*10+sum%10;
        sum/=10;
    }



    printf("%d\n", n);
    return 0;
}

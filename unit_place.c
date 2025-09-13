
#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    printf("Enter the Number ");
    scanf(" %d%d",&a,&b);
    a=a%10;
    if (a==0||a==1||a==5||a==6)
        printf("%d",a);
    else if(a==2||a==8)
            printf("%d",(6*(int)pow(a,b%4))%10);
    else if(a==4)
            printf("%d",(6*(int)pow(a,b%2))%10);
    else if(a==3||a==7)
            printf("%d",(1*(int)pow(a,b%4))%10);
    else if(a==9)
            printf("%d",(1*(int)pow(a,b%2))%10);
    return 0;
}
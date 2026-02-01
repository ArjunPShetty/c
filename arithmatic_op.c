#include <stdio.h>

int main() 
{
int a,b;
printf("Enter the Number ");
scanf("%d%d", &a,&b);
char n;
printf("Enter the operation in (-,+,*,/) ");
scanf(" %c", &n);
{
    switch(n)
    {
        case '+': 
        printf("addtion of two no %d%d ",a+b);
        break;
        case '-':
        printf("Subtraction of two no %d%d ",a-b);
        break;
        case '*': 
        printf("multiplication of two no %d%d ",a*b);
        break;
        case '/': 
        printf("division of two no %d%d ",a/b);
        break;
        default: printf("Invalid operation use (-,+,*,/)");
        break;
    }
}
return 0;
}
#include <stdio.h>
int main() {
    char ch[10];
    printf("Enter a lowercase letter: ");
    scanf("%s", ch);
    for(int i=0;i<10;i++)
    {
    printf("%c",ch[i]-32);    
    }
    return 0;
}

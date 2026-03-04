#include <stdio.h>
#include <string.h>
int main() {
    char ch[100];
    printf("Enter a lowercase letter: ");
    scanf("%s", ch);
    for(int i=0;i<10;i++)
    {
        if(ch[i]>=65&&ch[i]<=90)
        ch[i] = ch[i] + 32;
        else if(ch[i]>=97&&ch[i]<=122)
        ch[i] = ch[i] - 32;
    }
    printf("This is: %s\n", ch);
    return 0;
}
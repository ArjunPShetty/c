#include<stdio.h>
#include<string.h>
int main() {
    int count=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%*c",str);
    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ' ' && count == 0)
        continue;
        else if(str[i] !== ' '&& count>0)
        break;
        else
            count++;
    }
    printf("Length of the last word: %d\n", count);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abcd";
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string: %d\n",count); 
}
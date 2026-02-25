#include <stdio.h>
#include <string.h>

int main() {
    char name[4][10]={"amogh","anand","keerthan","mainsh"};
    char n[10];
    printf("Enter the name :");
    scanf("%s",n);
    for(int i=0;i<4;i++)
    {
        if (strcmp(name[i],n)==0)
        {
 printf("Name found");
 return 0;
 }
 }
 printf("Name not found");
}

#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    printf("Enter your email: ");
    scanf("%s", email);
    if(email[0]>='0'&&email[0]<='9')
    {
        printf("Invalid email address.\n");
    } 
    int count1=0,count2=0,count3=0;
    for(int i=0;i<strlen(email);i++)
    {
        if(email[i]>=65&&email[i]<=90)
        continue;
        else if(email[i]>=97&&email[i]<=122)
        continue;
        else if(email[i]>=48&&email[i]<=57)
        continue;
        else if(email[i]=='@')
        count1++;
        else if(email[i]=='.')
        count2++;
        else
        count3++;
        }
    if(count1>1||count2>1||count3>0)
    {
        char data[]="gmail.com";
        int j=strlen(email)-1;
        for(int i=strlen(data)-1;i>=0;i--)
        {
            if (data[i]!=email[j])
            {
                printf("Invalid");
                return 0;
            }
            j--;
        }
    }
    printf("valid email address.\n");
    return 0;
    +
}

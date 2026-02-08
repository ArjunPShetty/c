//count no of time
#include<stdio.h>
#include<string.h>
int main()
{
char ch[]="aabbccddaabb";
char current=ch[0];
int count=1;
for(int i=1;i<=strlen(ch);i++)
{
if(ch[i]==current)
count++;
else{
    printf("count is %d for %c\n",count,current);
    current=ch[i];
    count=1;
}
}
return 0;
}
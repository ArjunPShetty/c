#include <stdio.h>
int main() 
{
int n;
printf("Enter the Number ");
scanf(" %d", &n);
for (int i=2; i<=n; i++)
{
      printf("%d\n",i);
      i+=1;
    
}
return 0;
}
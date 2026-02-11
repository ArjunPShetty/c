#include <stdio.h>
int main() 
{
 int n,m;
 printf("Enter the Number ");
 scanf(" %d%d", &n,&m);
  int o=printf("%d\n",n+m);
 int a=0,b=1;
 for(int i=0;i<o;i++)
 {
     o=a+b;
     a=b;
     b=o;
 }
 printf("%d\n",a);
return 0;
}
#include <stdio.h>
int main()
{
int n,f=0,s=1,t;
printf("Enter the Number : ");
scanf("%d",&n);
if (n==0)
printf("%d",0);

else if (n==1)
printf("%d",1);

else if (n==2)
printf("%d,%d",0,1);

else{
    printf("0,1,");
    for(int i=1;i<=n-2;i++ )
    {
        t=f+s;
        f=s;
        s=t;
        printf("%d,",t);
    }
}
    return 0;
}
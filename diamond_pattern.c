#include <stdio.h>

int main()   
{
    int n=7;
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("%d",i);
                printf("\n");
            }

    }
    for (int i=2;i<=n;i++)
    {
        for(int j=(n-i);j>=1;j--)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("%d",i);
                printf("\n");
            }
    }
    return 0;
}
#include <stdio.h>

int main() {
int n;
printf("Enter the number : ");
scanf("%d",&n);
    printf(" 1          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("*");
        printf("\n");
    }

    printf(" 2          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }

    printf(" 3          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("%d",i);
        printf("\n");
    }

    printf(" 4          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("%d",j);
        printf("\n");
    }

    printf("  5          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("%c",i+64);
        printf("\n");
    }

    printf("  6          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("%c",j+64);
        printf("\n");
    }

    printf("   7          \n");
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }

    printf("      8          \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=i;k++)
                printf("*");
                printf("\n");
            }
    }

    printf(" 9           \n");
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=i;k++)
                printf("*");
                printf("\n");
            }
    }

    printf("   10        \n");
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("*");
                printf("\n");
            }
    }

    printf("   11        \n");
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("*");
                printf("\n");
            }
    }

    printf("   12        \n");
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("*");
                printf("\n");
            }

    }
    for (int i=2;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
            {
                for(int k=1;k<=(2*i-1);k++)
                printf("*");
                printf("\n");
            }
    }

    printf("   13        \n");
    for (int i=n;i>=1;i--)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }

    printf("   14        \n");
    for (int i=1;i<=n;i++)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    for(int k=1;k<=(n-i);k++)
    printf(" ");                        
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }

    printf("    15        \n");
    for (int i=n;i>=1;i--)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    for(int k=1;k<=(n-i);k++)
    printf(" ");                        
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }
    for (int i=2;i<=n;i++)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }

    printf("    16       \n");
   for (int i=1;i<=n;i++)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    for(int k=1;k<=(n-i);k++)
    printf(" ");                        
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }
    for (int i=n-1;i>=1;i--)
    {
    for(int j=1;j<=i;j++)
    printf("*");
    
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    {
    for(int k=1;k<=(n-i);k++)
    printf(" ");
    }
    for(int j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }
    printf("    17       \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf(" ");
        printf("%d",i);
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        if(i!=n)
        printf("%d",i);
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf(" ");
        printf("%d",i);
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        if(i!=n)
        printf("%d",i);
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        printf("\n");
    }
    return 0;
}
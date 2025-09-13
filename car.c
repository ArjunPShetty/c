#include<stdio.h>
void sum(int);
int main()
{
    int d=0;
    printf("Enter the Date : ");
    scanf("%d",&d);
    int c[] = {2375, 7682, 2325, 2352};
    int f[] = {250, 500, 350, 200};
    int n=sizeof(c)/sizeof(c[0]);
    int total=0;
    for(int i=0;i<n;i++)
    {
        if (d%2==0&&c[i]%2!=0)
            total += f[i];
        else if (d%2!=0&&c[i]%2==0)
            total += f[i];
    }
    printf("The total fine for car %d is %d\n", d, total);
    return 0;
}
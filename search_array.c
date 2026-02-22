#include <stdio.h>

int main() 
{
    int n,x,i,t,h=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element:");
    scanf("%d",&x);
    for (i=(n-1);i>1;i--)
       {
        if(x==arr[i])
        h=1;
        printf("%d",i);
        break;
       }
    return 0;
}
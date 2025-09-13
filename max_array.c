#include<stdio.h>
int main()
{
    
    int n,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("The maximum Element are : \n");
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
    printf("\n%d",arr[i]);
    else
    printf("\n%d",arr[i-1]);
    }
return 0;
}
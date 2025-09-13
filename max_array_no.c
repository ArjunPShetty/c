#include<stdio.h>
int main()
{
    
    int n;
    printf("Enter Number of Elememts: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array Elememts:\n ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Maximaum number : %d",max);
return 0;
}
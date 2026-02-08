#include<stdio.h>
int main()

{
    
    int n,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("The Entered Element are : \n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    for(int i=0;i<n;i++)
    sum+=arr[i];
        printf("\nThe Sum of Array is : %d",sum);


return 0;
}
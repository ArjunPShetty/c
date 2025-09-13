#include<stdio.h>
void power(int);
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("The Entered Element are : \n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
return 0;
}

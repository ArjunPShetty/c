#include<stdio.h>
int main()

{
    int arr1[]={4, 8, 1, 3, 7};
    int arr2[]={7, 4, 3, 1};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int sum1=0,sum2=0;
    for(int i=0;i<n1;i++)
    sum1+=arr1[i];
    for(int i=0;i<n2;i++)
    sum2+=arr2[i];
    if(sum1!=sum2)
    printf("\nThe Missing Element is : %d",sum1-sum2);


return 0;
}
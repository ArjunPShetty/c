#include<stdio.h>
void sum(int);
int main()
{
    int d=0,total=0;
    int arr1[] = {1,3,1,2};
    int arr2[] = {2,2,3,1};
    int sum1=arr1[0],sum2=arr2[0];
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=1;i<n;i++)
    {
        sum1+=i%2==0?arr1[i]:arr2[i];
        sum2+=i%2==0?arr2[i]:arr1[i];
    }
    sum1<sum2?printf("The total min time for train is %d\n", sum1):printf("The total min time for train is %d\n", sum2);
    return 0;
}
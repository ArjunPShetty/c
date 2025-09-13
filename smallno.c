#include<stdio.h.>
int main()
{
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
char nums[] = {2,7,11,15};
int a;
printf("Enter the required no :");
scanf("%d",&a);
int n=sizeof(nums)/sizeof(nums[0]);
for(int i=1;i<n;i++)
{
    if(nums[i]+nums[i-1])
    printf("%d%d",i,i-1);
}
return 0;
}
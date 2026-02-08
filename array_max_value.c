#include <stdio.h>

int main() 
{
    int k = 10,ans=0,x;
    int arr1[] = {3, 4, 5};
    int arr2[] = {4, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for(int i=0;i<n-1;i++)
    {
        x=(k/arr1[i])*arr2[i];
        if(x>ans)
        ans=x;
    }
    printf("%d",ans);
    
    return 0;
}
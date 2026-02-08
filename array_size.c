#include<stdio.h>
int main()
{
    int arr[5];
    printf("size of Array = %d bytes\n",sizeof(arr));
    printf("size of one Elememt = %d bytes\n",sizeof(arr[0]));
    printf("Number of Element = %d\n",sizeof(arr)/sizeof(arr[0]));

}

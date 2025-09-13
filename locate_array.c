// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    int key;
    scanf("%d",&key);
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        if (key==a[i][j])
        printf("%d\t%d",i,j);
        printf("\n");
    }
    return 0;
}
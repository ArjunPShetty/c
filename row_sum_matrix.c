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
    for (int i=0;i<r;i++)
    {
    int s=0;
    for(int j=0;j<c;j++)
    s+=a[i][j];
    printf("%d is %d\t",i+1,s);
    
    }
    return 0;
}
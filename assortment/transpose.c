#include<stdio.h>
int main(){
    int n,m,a[20][20],b[20][20];
    printf("\nEnter no. of rows of an array : ");
    scanf("%d",&m);
    printf("\nEnter no. of cols of an array : ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTranspose of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j]=a[j][i];
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
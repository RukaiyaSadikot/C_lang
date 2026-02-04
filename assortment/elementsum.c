#include<stdio.h>
int main(){
    int n,m,a[20][20],r,c,sum;
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
    printf("\nEnter row no.: ");
    scanf("%d",&r);
    sum=0;
    printf("sum of elements of row are : ");
    for (int i = 0; i < n; i++)
    {
        sum += a[r][i];

    }
    printf("%d",sum);
    
    printf("\nEnter col no.: ");
    scanf("%d",&c);
    sum=0;
    printf("sum of elements of row are : ");
    for (int i = 0; i < m; i++)
    {
        sum += a[i][c];

    }
    printf("%d",sum);
    
    return 0;
}
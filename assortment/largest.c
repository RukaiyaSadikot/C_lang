#include<stdio.h>
int main(){
    int n,m,a[20][20],temp;
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
    temp=a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > temp)
            {
                temp=a[i][j];
            }            
        }
    }
    printf("\nThe Largest element of 2d array is : %d",temp);


    return 0;
}
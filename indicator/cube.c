#include <stdio.h>

void Cube(int *arr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int val = *(arr + i * c + j);
            printf("Cube of element [%d][%d] = %d\n", i, j, val * val * val);
        }
    }
}

int main()
{
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n]; 

    printf("Enter elements of the array:\n");
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d", &arr[i][j]);
        }
    } 
    Cube(&arr[0][0], m, n);
    return 0;
}

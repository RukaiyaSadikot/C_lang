#include<stdio.h>
int main(){
    int n,a[20];
    printf("\nEnter no. of elements of an array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe Negative no. of array are : ");

    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            printf("%d ",a[i]);
        }
        
    }
    

    

    return 0;
}
#include<stdio.h>

int main(){
    int a[20],b[20],m,n,sum=0;
    int *ptr1,*ptr2;
    ptr1 = a;
    ptr2 = b;
    printf("\nEnter no. elements of 1st array :");
    scanf("%d",&m);

    printf("\nEnter array elements of 1st array\n");
    for (int i = 0; i < m; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        sum += *(ptr1 + i);
    }
    
    printf("\nEnter no. elements of 2nd array :");
    scanf("%d",&n);

    printf("\nEnter array elements of 2nd array\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&b[i]);
        sum += *(ptr2 + i);
    }
    printf("sum of elements of both 1D array is = %d",sum);

    

    return 0;
}

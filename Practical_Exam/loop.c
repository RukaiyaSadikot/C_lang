#include<stdio.h>
int main(){
    int n=10;
    for (int i = 0; i < 5; i++)
    {
        n=10-i;
        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }
        
    
        for (int j = 0; j < 5-i; j++)
        {
            printf("%d ",n);
            n--;
        }
        printf("\n");
        
    }

    return 0;
    
}
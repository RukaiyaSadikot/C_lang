#include<stdio.h>
int main(){
    int n=5,temp=5;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5-i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",temp);
            if (j == i)
            {
                for (int l = 1; l < i; l++)
                {
                        printf("%d ",temp-l);
                }   
            }
            temp++;    
        }
        printf("\n");
        n-=1;
        temp=n;  
    }
    

    return 0;
}
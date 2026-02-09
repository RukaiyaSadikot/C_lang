#include<stdio.h>
int main(){
    int n=41;
    for (int i = 1; i <= 5; i++)
    {   
        n=41;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
        
    }
    return 0;
}
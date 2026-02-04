#include <stdio.h>

int main(){
    int i,n=1;
    for(i=1;i<=4;i++){
        for (int k = i; k < 4; k++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            if (j!=i)
            {
                printf("*");
            }else{
                printf("%d",i);
            }
                        
        }
        n=n+2;

        printf("\n");
    }
    return 0;
}
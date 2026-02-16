#include<stdio.h>

void divisible(int n){
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5 ",n);
    }else{
        printf("%d is not divisivle by both 3 and 5",n);
    }
    
}
int main(){
    int n;
    printf("Enter a number to check its divisibilty by 3 and 5 :");
    scanf("%d",&n);
    divisible(n);
    return 0;
}
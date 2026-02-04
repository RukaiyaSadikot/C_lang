#include<stdio.h>
int main(){

    int num,count=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if (num == 0)
    {
        count = 1;
    }else{
        while (num != 0)
        {
            num = num/10;
            count++;
        }
        
    }
    printf("\nThe total No. of digits of given number is %d",count);
    
    return 0;
}
#include<stdio.h>
int main(){
    int num,fd,ld,sum;
    printf("\nEnter a Number : ");
    scanf("%d",&num);
    ld=num%10;
    fd=num;
    while (fd >= 10)
    {
        fd=fd/10;
    }
    sum=fd+ld;
    printf("sum of 1st digit and last digit of the number is %d",sum);
    return 0;
    
}
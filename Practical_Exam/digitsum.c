#include<stdio.h>
int main(){
    int n,sum=0,last,first;
    printf("\nEnter a 3 digit positive integer : ");
    scanf("%d",&n);
    if(n < 0 || n % 100 < 10){
        printf("please enter a 3 digit positive no.");
        scanf("%d",&n);
    }
    last = n%10;
    first=n/100;

    sum=first+last;
    printf("\nThe sum of first and last digit of no. is %d",sum);

    return 0;
}
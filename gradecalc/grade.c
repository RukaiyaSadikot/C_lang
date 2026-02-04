#include<stdio.h>

int main(){
    int score;
    printf("Enter your score : ");
    scanf("%d",&score);

    if (score >= 90)
    {
        printf("Your grade is A");
    }else if (score >= 80 && score <= 90)
    {
        printf("Your grade is B");

    }else if (score >= 70 && score <= 80)
    {
        printf("Your grade is c");

    }else{
        printf("Your score is D");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int score;
    char grade;
    printf("Enter your score : ");
    scanf("%d",&score);

    if (score >= 90)
    {
        grade='A';
    }else if (score >= 80 && score <= 90)
    {
        grade='B';

    }else if (score >= 70 && score <= 80)
    {
        grade='C';

    }else if (score >= 60 && score <= 70)
    {
        grade='D';

    }else{
        grade='F';
    }
    switch (grade)
    {
    case 'A':
        printf("\nYour Grade is A.Excellent Work!!");
        break;
    case 'B':
        printf("\nYour Grade is B.Well Done!!");
        break;
    case 'C':
        printf("\nYour Grade is C. Good Job!!");
        break;
    case 'D':
        printf("\nYour Grade is D.You Passed but you could do Better!!");
        break;
    case 'F':
        printf("\nYour Grade is F.Sorry You Failed!!");
        break;
    
    default:
        break;
    }
    return 0;
}
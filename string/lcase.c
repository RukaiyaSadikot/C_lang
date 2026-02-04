#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("The character is uppercase");
    }else{
        printf("The character is lowercase");
    }
    return 0;
}
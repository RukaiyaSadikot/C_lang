#include<stdio.h>
int main(){

    char str[20],cstr[20];
    printf("Enter a string to be copied : ");
    scanf("%s" ,&str);
    for (int i = 0; str[i] != '\0'; i++)
    {                
        cstr[i]=str[i];
    }
    printf("%s" , cstr);
    
    return 0;

}
#include<stdio.h>
int main(){
    char c=0;
    printf("Ascii value | char\n");
    for (int i = 0; i <= 127; i++)
    {
        printf("%d | %c \n" ,c ,c);
        c++;
    }
    return 0;
    
}
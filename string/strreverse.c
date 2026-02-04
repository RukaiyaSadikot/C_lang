#include<stdio.h>
int main(){
    char str[]={"Hello"};
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    printf("Reversed string is \n");
    for ( int j = i-1; j >= 0; j--)
    {
        printf("%c",str[j]);
    }
    
    return 0;
}
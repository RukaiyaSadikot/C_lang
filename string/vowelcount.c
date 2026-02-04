#include<stdio.h>
int main(){
    char str[20];
    int v=0;
    printf("enter a string : ");
    scanf("%s", str);
    int n=0;
    while(str[n] != '\0'){
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        switch (str[i])
        {
        case 'A':
            v++;
            break;
        case 'a':
            v++;
            break;
        case 'E':
            v++;
            break;
        case 'e':
            v++;
            break;
        case 'I':
            v++;
            break;
        case 'i':
            v++;
            break;
        case 'O':
            v++;
            break;
        case 'o':
            v++;
            break;
        case 'U':
            v++;
            break;
        case 'u':
            v++;
            break;
        
        default:
            break;
        }
    }
    printf("the number of vowels in the string is %d ",v);
    

    return 0;
}
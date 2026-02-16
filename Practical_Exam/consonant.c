#include <stdio.h>

int charcount(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[20], ch;
    int result;
    
    printf("\nEnter a String : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        result = charcount(str, str[i]);
        printf("\n'%c' ==> %d \n", str[i], result);
    }
    return 0;
}

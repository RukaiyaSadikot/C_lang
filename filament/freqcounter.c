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

    printf("\nEnter char to count : ");
    scanf(" %c", &ch);

    result = charcount(str, ch);
    printf("\n'%c' char is found %d times in the string\n", ch, result);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];

    printf("Enter any string: ");
    scanf("%s", str);
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0){
        printf("The given string is a Palindrome.\n");
    }
    else{
        printf("The given string is NOT a Palindrome.\n");
    }

    return 0;
}

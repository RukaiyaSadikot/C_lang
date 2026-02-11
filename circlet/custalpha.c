#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
           
            if (i == 1 || i == 3) {
                printf("* ");
            } else if (i == 2 && (j == 1 || j == cols)) {
                printf("* ");
            } else if (i > 3 && j == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

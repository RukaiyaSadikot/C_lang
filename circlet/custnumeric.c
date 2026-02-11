#include <stdio.h>

int main() {
    int r = 5;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        int sp = (r - i) * 2;
        for (int s = 0; s < sp; s++) {
            printf("  "); 
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

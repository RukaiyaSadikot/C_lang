#include <stdio.h>

// User-defined functions
int add(int a, int b)
{
     return a + b; 
}
int sub(int a, int b) 
{ 
    return a - b; 
}
int mul(int a, int b) 
{ 
    return a * b; 
}
int divide(int a, int b) 
{ 
    if (b != 0)
        return a/b;
    else
        return 0;
}
int mod(int a, int b) 
{ 
    if (b != 0)
        return a%b;
    else
        return 0;
}

int main() {
    int ch, a, b, result;
    char c = 'y';

    while (c == 'y') {
        printf("\n*** Calculator Menu ***\n");
        printf("Press 1 for Addition (+)\n");
        printf("Press 2 for Subtraction (-)\n");
        printf("Press 3 for Multiplication (*)\n");
        printf("Press 4 for Division (/)\n");
        printf("Press 5 for Modulus (%%)\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (ch) {
            case 1: 
                result = add(a, b); 
                break;
            case 2: 
                result = sub(a, b); 
                break;
            case 3: 
                result = mul(a, b); 
                break;
            case 4: 
                if (b != 0) 
                    result = divide(a, b);
                else { 
                    printf("Error: Division by zero!\n"); 
                    continue; 
                }
                break;
            case 5: 
                if (b != 0) 
                    result = mod(a, b);
                else { 
                    printf("Error: Modulus by zero!\n"); 
                    continue; 
                }
                break;
            default: 
                printf("Invalid choice!\n"); 
                continue;
        }

        printf("Result = %d\n", result);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &c); 
    }

    printf("\nCalculator terminated.\n");
    return 0;
}

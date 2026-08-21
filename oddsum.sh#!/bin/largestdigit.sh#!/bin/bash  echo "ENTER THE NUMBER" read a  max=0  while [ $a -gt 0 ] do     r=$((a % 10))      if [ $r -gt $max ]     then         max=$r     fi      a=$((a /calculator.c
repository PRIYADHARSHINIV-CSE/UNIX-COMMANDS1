#include <stdio.h>

int main() {
    int a, b, op;

    printf("ENTER THE VALUE OF A: ");
    scanf("%d", &a);

    printf("ENTER THE VALUE OF B: ");
    scanf("%d", &b);

    printf("ENTER THE OPTION TO PERFORM\n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");

    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            printf("Result = %d\n", a / b);
            break;

        default:
            printf("Invalid Option\n");
    }

    return 0;
}

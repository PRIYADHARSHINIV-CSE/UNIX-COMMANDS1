#include <stdio.h>

int main() {
    int n, x = 1, sum = 0;

    printf("ENTER THE RANGE: ");
    scanf("%d", &n);

    while (x <= n) {
        sum = sum + x;
        x = x + 2;
    }

    printf("SUM = %d\n", sum);

    return 0;
}

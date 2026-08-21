#include <stdio.h>

int main() {
    int n, p = -1, q = 1, r, i = 1;

    printf("ENTER THE LIMIT: ");
    scanf("%d", &n);

    while (i <= n) {
        r = p + q;
        p = q;
        q = r;

        printf("%d ", r);

        i++;
    }

    printf("\n");

    return 0;
}

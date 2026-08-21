#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);

    while (n > 1) {
        fact = fact * n;
        n--;
    }

    printf("FACTORIAL OF THE GIVEN NUMBER IS %d\n", fact);

    return 0;
}

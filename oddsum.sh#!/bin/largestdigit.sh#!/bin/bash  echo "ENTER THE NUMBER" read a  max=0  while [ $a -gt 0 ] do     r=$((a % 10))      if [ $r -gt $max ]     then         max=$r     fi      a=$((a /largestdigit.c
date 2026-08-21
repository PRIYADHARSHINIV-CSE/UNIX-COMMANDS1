#include <stdio.h>

int main() {
    int a, r, max = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &a);

    while (a > 0) {
        r = a % 10;

        if (r > max)
            max = r;

        a = a / 10;
    }

    printf("THE LARGEST DIGIT OF THE NUMBER: %d\n", max);

    return 0;
}

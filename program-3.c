#include <stdio.h>

int main() {
    int n, i, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    // if a is even, reduce term count by 1
    if (n % 2 == 0)
        count = n - 1;
    else
        count = n;

    printf("Output: ");
    for (i = 0; i < count; i++) {
        printf("%d", 2 * i + 1);
        if (i < count - 1) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}

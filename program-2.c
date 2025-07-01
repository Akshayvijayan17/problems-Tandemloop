#include <stdio.h>

int main() {
    int n, i, num = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output: ");
    for(i = 0; i < n; i++) {
        printf("%d", num);
        if(i < a - 1) {
            printf(", ");
        }
        num += 2;
    }

    return 0;
}

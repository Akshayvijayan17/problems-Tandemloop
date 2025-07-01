#include <stdio.h>

int main() {
    int arr[100], n, i;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 1 == 0) c1++;
        if(arr[i] % 2 == 0) c2++;
        if(arr[i] % 3 == 0) c3++;
        if(arr[i] % 4 == 0) c4++;
        if(arr[i] % 5 == 0) c5++;
        if(arr[i] % 6 == 0) c6++;
        if(arr[i] % 7 == 0) c7++;
        if(arr[i] % 8 == 0) c8++;
        if(arr[i] % 9 == 0) c9++;
    }

    printf("\nOutput:\n");
    printf("{1: %d, 2: %d, 3: %d, 4: %d, 5: %d, 6: %d, 7: %d, 8: %d, 9: %d}\n",
           c1, c2, c3, c4, c5, c6, c7, c8, c9);

    return 0;
}

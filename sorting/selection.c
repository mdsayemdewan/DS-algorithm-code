#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {9, 5, 10, 4, 3};

    for (int i = 0; i < n - 1; i++) {
        int max = 0;

        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }

        if (max != n - i - 1) {
            int temp = arr[max];
            arr[max] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

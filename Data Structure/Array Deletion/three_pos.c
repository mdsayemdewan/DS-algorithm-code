#include<stdio.h>

int main() {
    int a[100], i, pos1, pos2, pos3, n;

    printf("Enter array Size:\n");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the positions to delete:\n");
    scanf("%d %d %d", &pos1, &pos2, &pos3);

    for (i = pos3; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    for (i = pos2; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    for (i = pos1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    printf("After Deletion elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

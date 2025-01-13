#include<stdio.h>

int main() {
    int a[100], i, j, value, n, idx=-1;

    printf("Enter array Size:\n");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to delete:\n");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            idx = i;
            --n;
            for (j = idx; j < n; j++) {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    
    printf("After Deletion elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

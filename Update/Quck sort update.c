#include <stdio.h>
int partition(int a[], int p, int r) {
    int x, i, j, tmp;
    x = a[p];
    i = p - 1;
    j = r + 1;

    while (1) {
        do {
            i++;
        } while (a[i] < x);

        do {
            j--;
        } while (a[j] > x);

        if (i < j) {

            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        } else {
            return j;
        }
    }
}


void quicksort(int a[], int p, int r) {
    int q;
    if (p < r) {
        q = partition(a, p, r);
        quicksort(a, p, q);
        quicksort(a, q + 1, r);
    }
}


int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n,i,value,hole;
    int arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements :");

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++) {
        value = arr[i];
        hole = i ;

        while (hole > 0 && arr[hole-1]>value) {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }

    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



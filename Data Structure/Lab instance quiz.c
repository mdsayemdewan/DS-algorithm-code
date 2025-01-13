#include <stdio.h>

void countElement(int arr[], int size, int target) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            count++;
        }
    }

    if(count > 0) {
        printf("Element %d is present %d times.\n", target, count);
    } else {
        printf("Element not found.\n");
    }
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &target);

    countElement(arr, size, target);

    return 0;
}

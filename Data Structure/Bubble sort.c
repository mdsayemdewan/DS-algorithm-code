#include <stdio.h>
#include <stdlib.h>

// Function to sort the array
void sortArray(char arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to perform binary search
int binarySearch(char arr[], int size, char target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}

int main() {
    int size;
    char target;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char arr[size];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf(" %c", &arr[i]);
    }

    // Input the character to search for
    printf("Enter the character to find: ");
    scanf(" %c", &target);

    // Sort the array
    sortArray(arr, size);

    // Perform binary search
    int result = binarySearch(arr, size, target);

    if(result != -1) {
        printf("Element '%c' found at index %d in the sorted array.\n", target, result);
    } else {
        printf("Element '%c' not found.\n", target);
    }

    return 0;
}

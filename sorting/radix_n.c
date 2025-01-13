#include <stdio.h>

int find_max(int arr[], int size) {
    int max_value = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max_value)
            max_value = arr[i];
    return max_value;
}

void radix_sort(int arr[], int size) {
    int buckets[10][10], bucket_count[10];
    int index, bucket_index, digit_position, num_of_passes = 0, divisor = 1, largest_value, pass;

    // Find the largest number to determine the number of passes
    largest_value = find_max(arr, size);
    while (largest_value > 0) {
        num_of_passes++;
        largest_value /= 10;
    }

    // Perform counting sort for each digit
    for (pass = 0; pass < num_of_passes; pass++) {
        // Reset bucket counts
        for (index = 0; index < 10; index++) {
            bucket_count[index] = 0; // Reset bucket counts to 0
        }

        // Place each number in the corresponding bucket
        for (index = 0; index < size; index++) {
            digit_position = (arr[index] / divisor) % 10; // Get the digit
            buckets[digit_position][bucket_count[digit_position]] = arr[index]; // Place number in bucket
            bucket_count[digit_position] += 1; // Increment count for the bucket
        }

        // Retrieve numbers from the buckets back into the original array
        index = 0;
        for (bucket_index = 0; bucket_index < 10; bucket_index++) {
            for (int j = 0; j < bucket_count[bucket_index]; j++) {
                arr[index] = buckets[bucket_index][j]; // Restore numbers from the bucket
                index++;
            }
        }

        divisor *= 10; // Move to the next digit
        printf("After pass %d : ", pass + 1);
        for (index = 0; index < size; index++)
            printf("%d ", arr[index]); // Display the array after this pass
        printf("\n");
    }
}

int main() {
    int size, arr[10];
    printf("Enter the number of items to be sorted: ");
    scanf("%d", &size);
    printf("Enter items: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Input the items
    }

    radix_sort(arr, size); // Sort the items using radix sort
    printf("Sorted items : ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]); // Display sorted items
    printf("\n");

    return 0;
}

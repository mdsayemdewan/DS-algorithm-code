#include <stdio.h>

int main() {
    int a[10], buckets[10][10], bucketCounts[10];
    int i, j, k, digit, numItems, numDigits = 0, largestNum, currentPass, divisor = 1;

    printf("Enter the number of items to be sorted: ");
    scanf("%d", &numItems);

    printf("Enter items: ");
    for (i = 0; i < numItems; i++) {
        scanf("%d", &a[i]);
    }


    largestNum = a[0];
    for (i = 1; i < numItems; i++) {
        if (a[i] > largestNum) {
            largestNum = a[i];
        }
    }

    while (largestNum > 0) {
        numDigits++;
        largestNum /= 10;
    }


    for (currentPass = 0; currentPass < numDigits; currentPass++) {


        for (i = 0; i < 10; i++) {
            bucketCounts[i] = 0;
        }


        for (i = 0; i < numItems; i++) {
            digit = (a[i] / divisor) % 10;
            buckets[digit][bucketCounts[digit]] = a[i];
            bucketCounts[digit]++;
        }

        i = 0;
        for (k = 0; k < 10; k++) {
            for (j = 0; j < bucketCounts[k]; j++) {
                a[i] = buckets[k][j];
                i++;
            }
        }

        divisor *= 10;
    }

    printf("Sorted items: ");
    for (i = 0; i < numItems; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

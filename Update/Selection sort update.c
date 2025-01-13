#include <stdio.h>

int main() {
    int n ,i,j,min_index;
    int arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);

  printf("\nEnter the elements :");

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);


    for ( i = 0; i < n ; i++) {
        min_index=i;

        for (int j = i+1; j < n ; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

       int temp=arr[i];
       arr[i]=arr[min_index];
       arr[min_index]=temp;

    }

    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include<stdio.h>

int main() {
    int a[100], i, j, value1,value2, n, idx1=-1,idx2=-1;

    printf("Enter array Size:\n");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the first value to delete:\n");
    scanf("%d", &value1);
    printf("Enter the second value to delete:\n");
    scanf("%d", &value2);

    for (i = 0; i < n; i++) {
        if (a[i] == value1) {
            idx1 = i;
            --n;
            for (j = idx1; j < n; j++) {
                a[j] = a[j + 1];
            }
            i--;
        }
    }

    if(idx1==-1) printf("This %d element can not be deleted as it is not exist.",value1);

      for (i = 0; i < n; i++) {
        if (a[i] == value2) {
            idx2 = i;
            --n;
            for (j = idx2; j < n; j++) {
                a[j] = a[j + 1];
            }
            i--;
        }
    }

     if(idx1==-2) printf("This %d element can not be deleted as it is not exist.",value2);

    printf("After Deletion elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

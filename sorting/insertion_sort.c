#include <stdio.h>

int main()
{
  int n, array[100], i, j, t, flag = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }

  for (i = 1; i <= n - 1; i++) {
    t = array[i];
    j = i - 1;

    while (j >= 0 && array[j] > t) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}

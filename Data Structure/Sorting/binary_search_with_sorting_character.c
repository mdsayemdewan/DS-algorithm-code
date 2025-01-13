#include <stdio.h>

int main()
{
  char array[100], search;

  int n, swap,mini,maxi,mid;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d characters\n", n);
  for (int i = 0; i < n; i++){
    scanf(" %c", &array[i]);
  }

  for (int i = 0 ; i < n - 1; i++)
  {
    for (int j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1])
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

for (int i = 0; i < n; i++){
     printf("%c\n", array[i]);
}

  printf("Enter the character to find\n");
  scanf(" %c", &search);
  mini = 0;
  maxi = n - 1;
  while (mini <= maxi) {
         mid = (mini+maxi)/2;
   if (array[mid] == search) {
      printf("%c found at position %d.\n", search, mid+1);
      break;
    }
   else if (array[mid] < search) mini = mid + 1;
    else maxi = mid - 1;
  }
  if (mini > maxi) printf("%c not found \n", search);
  return 0;
}

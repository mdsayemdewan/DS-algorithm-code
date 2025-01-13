#include <stdio.h>

int main()
{
  int array[100], n, swap,search,mini,maxi,mid;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);
  for (int i = 0; i < n; i++){
    scanf("%d", &array[i]);
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
     printf("%d\n", array[i]);
}

  printf("Enter value to find\n");
  scanf("%d", &search);
  mini = 0;
  maxi = n - 1;
  while (mini <= maxi) {
         mid = (mini+maxi)/2;
   if (array[mid] == search) {
      printf("%d found at index %d.\n", search, mid);
      break;
    }
   else if (array[mid] < search) mini = mid + 1;
    else maxi = mid - 1;
  }
  if (mini > maxi) printf("%d not found \n", search);
  return 0;
}

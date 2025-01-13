#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];

  for (int i = 0; i < n; i++){
     scanf("%d", &ar[i]);
}

  for (int i= 0 ; i < n - 1; i++)
  {
      int count=0;
    for (int j = 0 ; j < n - i - 1; j++)
    {
      if (ar[j] > ar[j+1])
      {
        int swap   = ar[j];
        ar[j]   = ar[j+1];
        ar[j+1] = swap;
        count++;
      }
    }
    if(count==0){
    printf("Array is sorted\n");
      printf("Sorted list in ascending order:\n");
  for (int i = 0; i < n; i++){
     printf("%d ", ar[i]);
}
return 0;
  }

}
}

#include <stdio.h>

int main () {

   int a[10],n;
   int i;

   printf("Enter a number less than 11 : ");
   scanf("%d",&n);

   printf("Enter %d elements for the array : ",n);
   for ( i = 0; i < n; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("Inserted elements of the array : \n");
   for (i = 0; i < n; i++ ) {
      printf("Element[%d] = %d\n", i, a[i] );
   }

   int position1,position2,value1,value2;
   printf("Enter the values that you want to insert\n");
   scanf("%d %d",&value1,&value2);
      printf("Enter the positions where you want to insert\n");
     scanf("%d %d",&position1,&position2);

     for(i=n-1;i>=position1;i--){
         a[i+1]=a[i];
     }
     a[position1]=value1;

     for(i=n;i>=position2;i--){
         a[i+1]=a[i];
     }
     a[position2]=value2;

       printf("Inserted new elements of the array : \n");
   for (i = 0; i < n+2; i++ ) {
      printf("Element[%d] = %d\n", i, a[i] );
   }
   return 0;
}

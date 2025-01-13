#include<stdio.h>
int main()

{
int a[100],i,pos1,n,idx;

printf("Enter array Size:\n");
scanf("%d",&n);

printf("Enter %d array elements: \n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

    printf("Enter the position to delete \n");
    scanf("%d",&pos1);

       for(i=pos1;i<n-2;i++){
        a[i]=a[i+2];
       }

printf("After Deletion elements of the array are : ");
 for(i=0;i<n-2;i++){
    printf("%d ",a[i]);
 }

 return 0;
}
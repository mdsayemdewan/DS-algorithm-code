#include<stdio.h>
int main()

{
int a[100],i,value,n,idx;

printf("Enter array Size:\n");
scanf("%d",&n);

printf("Enter %d array elements: \n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

    printf("Enter the value to delete \n");
    scanf("%d",&value);

       for(i=0;i<n;i++){
       if( a[i]==value) {
            idx=i;
            break;
        }
       }

       for(i=idx;i<n-1;i++){
        a[i]=a[i+1];
       }

printf("After Deletion elements of the array are : ");
 for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
 }

 return 0;
}
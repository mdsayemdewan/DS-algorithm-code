#include<stdio.h>

int main()
{
    int a[10];
    int n,i;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    int n_i;
    scanf("%d",&n_i);

    for(i=n_i;i<n-1;i++){
        a[i]=a[i+1];
       }

    for(int i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}

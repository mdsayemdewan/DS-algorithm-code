#include <stdio.h>
int main()
{
    char a[10];
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);

    while (1)
    {
        if (n > 10)
        {
            printf("Invalid value. Please enter less than 10 or equal to 10 size\n");
            printf("Enter the size of array again:");
            scanf("%d", &n);
        }
        else
        {
            break;
        }
    }

    printf("Enter the values of array:");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    printf("\n");
    
    printf("The values of the array with %d item: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%c ", a[i]);
    }
    return 0;
}
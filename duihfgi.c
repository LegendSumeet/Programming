#include <stdio.h>
int main()
{
    printf("Enter ");

    int arr[5], j, i;

    for (j = 0; j < 5; j++)
    {
        scanf("%d", &arr[j]);
    }

    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("negative");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 3 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

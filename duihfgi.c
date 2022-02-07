#include <stdio.h>
int main()
{
    int sum[5];
    printf("Enter the numbers\n");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &sum[i]);
    }
    int lum = 0;
    int irfan = sizeof(lum) / sizeof(sum[0]);
    for (int j = 0; j < 5; j++)
    {
        lum = lum + sum[j];
    }

    printf("%d", lum);
}
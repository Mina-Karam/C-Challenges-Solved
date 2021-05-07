#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int step = 1; step <= n; step++)
    {
        for (int gap = 0; gap < n - step; gap++)
        {
            printf(" ");
        }
        for (int solid = 0; solid < step; solid++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
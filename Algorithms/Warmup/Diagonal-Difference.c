#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n][n];
    int primary_diagonal = 0,  secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                primary_diagonal += arr[i][j];
            }
            if (i == n - j - 1)
            {
                secondary_diagonal += arr[i][j];
            }
        }
    }
    printf("%d", abs(primary_diagonal - secondary_diagonal));

    return 0;
}
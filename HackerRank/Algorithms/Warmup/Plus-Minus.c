#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int positive_values = 0, negative_values = 0, zeros = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_values++ ;
        }
        else if (arr[i] < 0)
        {
            negative_values++ ;
        }
        else
        {
            zeros++ ;
        }
    }
    
    printf("%6f\n", (float)positive_values / n);
    printf("%6f\n", (float)negative_values / n);
    printf("%6f\n", (float)zeros / n);
    return 0;
}
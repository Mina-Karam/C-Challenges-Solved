#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
    long long arr[n];
    long long minimum_sum = 0, maximum_sum = 0;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // loop to access each array element
    for (int i = 0 ; i < n - 1 ; i++)
    {
        // loop to compare array elements
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            // compare two adjacent elements
            if (arr[j] > arr[j+1])
            {
                // swapping occurs
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }

    for (int j = 0; j < n - 1; j++)
    {
        minimum_sum += arr[j];
    }
    for (int m = 1; m < n; m++)
    {
        maximum_sum += arr[m];
    }

    printf("%lld %lld",minimum_sum, maximum_sum);

    return 0;
}
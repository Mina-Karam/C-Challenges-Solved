#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    long int ar[n];
    
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &ar[i]);
    }

    long int sum = 0;

    for(int i=0; i<n ; i++)
    {
        sum += ar[i];
    }
    printf("%d", sum);
}
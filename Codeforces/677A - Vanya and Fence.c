#include <stdio.h>
 
int calRowValue(int num, int height, int *arr);
 
int main()
{
    int n, h;
    int i, a[1000] = {0};
    int row = 0;
 
    scanf("%d %d", &n, &h);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    row = calRowValue(n, h, a);
 
    printf("\n%d", row);
 
    return 0;
}
 
int calRowValue(int num, int height, int arr[])
{
    int rowValue = 0, i;
    if(num >= 1 && num <= 1000 && height >= 1 && height <= 1000)
    {
        for (i = 0; i < num; i++)
        {
            if(arr[i] <= (2*height) && arr[i] >= 1)
            {
                if(arr[i] <= height)
                    rowValue++;
                else
                    rowValue+=2;
            }
        }
    }
    return rowValue;
}
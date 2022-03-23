#include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);

        int candle[n];
        int tallest = 0;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
           scanf("%d", &candle[i]);
        }

        for(int i = 0; i < n; i++)
        {
            if (tallest < candle[i])
            {    
               tallest = candle[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (candle[i] == tallest)
            {
                counter++;
            }
            
        }
        printf("%d", counter);

        return 0;
    }
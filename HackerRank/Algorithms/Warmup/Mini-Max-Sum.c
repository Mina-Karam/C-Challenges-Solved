void miniMaxSum(int arr_count, int* arr) 
{
    int sum = 0, i;
    int min, max;
    
    /* Get the summition of all elements in array */
    for (i = 0; i < arr_count ; i++) 
    {
        sum += arr[i];
    }
    
    min = arr[0]; // set the first element as min
    max = arr[0]; // set the first element as max
    
    /* Loop inside array */
    for (i = 1; i < arr_count ; i++) 
    {
        /* Compare current elements with max*/
        if(arr[i] < max)
            max = arr[i]; // if ture set it as max;
        
        /* Compare current elements with max*/
        if(arr[i] > min)
            min = arr[i]; // if ture set it as min;
    }
    
    /* Print sum_max & sum_min */
    printf("%d %d", sum - min, sum - max);
}

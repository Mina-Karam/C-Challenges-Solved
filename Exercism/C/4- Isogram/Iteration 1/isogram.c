#include "isogram.h"

bool is_isogram(const char phrase[])
{
    /* Checking of the input phrase is null or empty. */
    if(!phrase)
        return false;

    unsigned long long mask = 0; // 32 bit to contain the whole characters.
    char c; // To store the character which we will deal with it.

    /* Loop inside the string of input phrase. */
    while((c = *phrase++) != '\0')
    {   
        /* However spaces and hyphens are allowed to appear multiple times. */
        if (c == ' ' || c == '-')
            continue;
        
        /* 65 = A, 90 = Z,, 97 = a, 122 = z                           */
        /* Difference between 97 - 65 = 32                            */
        /* We put the mask as 32 bit                                  */
        /* Add 32 to put the range of calculation between (122, 97)   */
        /* The aim to put every char with 1 bit of total 32 bit,      */
        /* as we have 32 char, to easly detect the repeated character */
        
        if (c <= 'Z') // Put the range (122, 97)
            c += 32;
        
        if (mask & (1<<(c-'a'))) // Detect the repeated character
            return false;
        
        mask |= (1<<(c-'a')); // Save it with num of bit in total 32 bit;
    }
    return true;
}
#include<stdio.h>
#include<string.h>

int integer(char c)
{
    int num = 0;
    
    /* Maintain a map with Roman symbols and their corresponding integer equivalent. */
    switch(c)
    {
        case 'M': num = 1000; break;
        case 'D': num = 500; break;
        case 'C': num = 100; break;
        case 'L': num = 50; break;
        case 'X': num = 10; break;
        case 'V': num = 5; break;
        case 'I': num = 1; break;
    }
    return num;
}

int romanToInt(char *s)
{
    int i;
    int n = strlen(s);
    int result = 0;
    
    for(i = 0; i < n; i++)
    {
        /* If the next index is greater than the current index */
        if(integer(s[i+1]) > integer(s[i]))
            result -= integer(s[i]); /* In this case, we will subtract the value of the character from the result. */
        else
            result += integer(s[i]); /* In this case, we will add the value of the character to the result. */
    }
    return result;
}

//int main()
//{
//     char s[16];
//     scanf("%s",s);
//     int n = strlen(s);
//     printf("%d",romantoint(n,s));
// }
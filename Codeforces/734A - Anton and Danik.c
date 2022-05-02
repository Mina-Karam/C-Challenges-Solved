#include <stdio.h>
 
int main()
{
    long n, antonCount=0, danikCount=0, i;
    char s;
 
    scanf("%ld",&n);
 
    for (i = 0; i < n; i++)
    {
        scanf("%c",&s);
        if(s == 'A')
            antonCount++;
        else
            danikCount++;
    }
 
    if(antonCount > danikCount)
    {
        printf("Anton");
    }
    else if(antonCount < danikCount)
    {
        printf("Danik");
    }
    else if (antonCount == danikCount)
    {
        printf("Friendship");
    }
    return 0;
}
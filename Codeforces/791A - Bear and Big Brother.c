#include <stdio.h>

int main()
{
    int Limak_Weight=0, Bob_Weight=0,Years=0;

    scanf("%d %d",&Limak_Weight, &Bob_Weight);

    while(Limak_Weight<=Bob_Weight)
    {
        Limak_Weight*=3;
        Bob_Weight*=2;
        Years++;
    }

    printf("%d",Years);
    return 0;
}
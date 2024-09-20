#include <stdio.h>
int main1(void)
{
    int i, j;
    
    for(i = 1; i <6; i++)
    {
        for(j = i; j <= 25; j += i)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    
    return 0;
}


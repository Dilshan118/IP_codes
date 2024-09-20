#include <stdio.h>
int main (void)
{
    int i, j, k = 5;
    
    for (i = 1; i <= 6; i++)
    {
        
        for (j = 0; j <= k; j++)
        {
            printf("%d  ", j);
        }
        
        printf("\n\n");
        
        --k;
    }
    return 0;
}

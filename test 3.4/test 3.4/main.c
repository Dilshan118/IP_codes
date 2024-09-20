#include <stdio.h>
int main (void)
{
    int num;
    int i, j, k;
    
    do {
        printf("Enter number : ");
        scanf("%d", &num);
            
            if (num > 0) 
            {
                break;
            }
            else
            {
                printf("Invalid input!\n");
            }
        
    } while (1);
    
    for (i = 1; i <= num; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            for (k = 1; k <= i; k++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

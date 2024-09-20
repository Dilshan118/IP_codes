#include <stdio.h>
#define SIZE 5
int main(void)
{
    int rate[SIZE] = {0};
    int response;
    
    printf("Please input the service rating : ");
    scanf("%d", &response);
    
    while (response != -1)
    {
        if (response < 1 || response > 5)
        {
            printf("\nInvalid Input!\nenter again please..\n\nPlease Input the service rating : ");
            scanf("%d", &response);
            
            continue;
        }
        else
        {
            rate[response - 1] += 1;
            
            printf("Please input the service rating : ");
            scanf("%d", &response);
        }
    }
    
    printf("\nRating\tNumber of Response\n");
    
    for (int i = 0; i < SIZE ; ++i)
    {
        printf("%d\t\t%d\n", i + 1, rate[i]);
    }
    return 0;
}

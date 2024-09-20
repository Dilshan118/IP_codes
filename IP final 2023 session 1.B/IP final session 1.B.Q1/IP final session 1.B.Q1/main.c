#include <stdio.h>
int main(void)
{
    int i, j, rows, space;
    
    printf("Enter the num of rows : ");
    scanf("%d", &rows);
    
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i*2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = 2; i <= rows; i++)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i*2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

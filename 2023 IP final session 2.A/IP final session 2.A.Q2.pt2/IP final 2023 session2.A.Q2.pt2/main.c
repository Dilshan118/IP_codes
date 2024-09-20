#include <stdio.h>
int main(void)
{
    int matrix[5][5];
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter %d,%d : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= 0; j--)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

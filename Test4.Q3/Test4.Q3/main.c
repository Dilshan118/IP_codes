#include <stdio.h>
int main(void)
{
    int team1[3], team2[3], i;
    
    for (i = 0; i < 3; i++)
    {
        printf("Enter the score for team 1 for round %d : ", i+1);
        scanf("%d", &team1[i]);
    }
    printf("\n");
    
    for (i = 0; i < 3; i++)
    {
        printf("Enter the score for team 2 for round %d : ", i+1);
        scanf("%d", &team2[i]);
    }
    printf("\nteam 1\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", team1[i]);
    }
    printf("\nteam 2\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", team2[i]);
    }
    printf("\n\n");
    for (i = 0; i < 3; i++)
    {
        if (team1[i] > team2[i])
        {
            printf("Round %d : team1\n", i + 1);
        }
        else if (team1[i] == team2[i])
        {
            printf("Round %d : team1 & team2\n", i + 1);
        }
        else
        {
            printf("Round %d : team2\n", i + 1);
        }
    }
    return 0;
}

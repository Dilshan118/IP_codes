#include <stdio.h>
int main (void)
{
    int player, count, round, score,total=0,highestAve = 0,max=0,winner=0;
    
    printf("How many players are in the race : ");
    scanf("%d", &player);
    
    for (count=1; count<=player; count++)
    {
        total=0;
        printf( "Enter the score of player (between 0-7) %d-\n", count);
        for (round = 1; round< 3;round++) {
            printf("Round %d -",round);
            scanf( "%d", &score );
            
            total+=score;
        }
        printf("total of the player :%d\n",total);
        printf( "Average of the player :%.2f\n",(float)total / 2);
        
        if (max< total)
        {
            max= total;
            winner = count;
            
        }
    }
    
    printf("Highest Average obtained player %d\n",winner);
    
    return 0;
}

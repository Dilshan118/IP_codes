#include<stdio.h>
int main(void)
{
    char mazeMap[5][5];
    int i, j, obs = 1;
    
    for (obs = 1; obs <=5; obs++)
    {
        printf("Enter the location of obstecle %d : ", obs);
        scanf("%d %d", &i, &j);
        
        if(mazeMap[i][j] != 'X')
        {
            mazeMap[i][j] = 'X';
        }
        else
        {
            printf("Sorry, there is an obstacle in this place.\n");
            
            obs--;
        }
    }
        
        for (i = 0; i <5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if (mazeMap[i][j] != 'X')
                {
                    mazeMap[i][j] = 'O';
                }
            }
            
        }
    printf("\n");
        
        for (i = 0; i <5; i++)
        {
            for(j = 0; j < 5; j++)
            {
               printf("%c\t", mazeMap[i][j]);
            }
            printf("\n\n");
        }
    
    printf("Enter the current location : ");
    scanf( "%d %d", &i, &j);
    
    printf("\nYou can move,");
    
    if (mazeMap[i-1][j] != 'X')
    {
        printf("Up\t");
    }
    if (mazeMap[i][j - 1] != 'X')
    {
        printf("left\t");
    }
    if (mazeMap[i][j + 1] != 'X')
    {
        printf("Right\t");
    }
    if (mazeMap[i+1][j] != 'X')
    {
        printf("Down\t");
    }
    
    
    return 0;
}

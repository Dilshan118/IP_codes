#include <stdio.h>
int main (void)
{
    int i, j, marks, total = 0, highestMark = 0;
    float avg = 0.0;
    
    for(i = 1; i<= 3; i++)
    {
        highestMark = 0;
        
        for(j = 1; j <= 4; j++)
        {
            printf("Enter the module marks of student : ");
            scanf("%d", &marks);
            
            total += marks; //total = total + marks
            
            if (highestMark < marks)
            {
                highestMark = marks;
            }
            
        }
        
        printf("total is : %d\n", total);
        printf("highest Mark is : %d\n", highestMark);
        
        avg = total/4;
        
        printf("Average : %.2f\n", avg);
        
    }
    
    return 0;
        
}

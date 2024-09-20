#include <stdio.h>
int main(void)
{
    FILE * ctPtr;
    int no, qty, count, i, j;
    float itemPrice;
    
    printf("Enter how many items details goint to store : ");
    scanf("%d", &count);
    
    int array1[count][3];
    
    for(i = 0; i < count; i++)
    {
        printf("Enter item NO, quantity sold, price of one item : ");
        
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &array1[i][j]);
        }
        
    }
    
    ctPtr = fopen("item.txt" , "w");
    
    if(ctPtr == NULL)
    {
        printf("Error opening file!\n");
        return -1;
    }
    
    fprintf(ctPtr, "Item NO qty item price\n");
    
    for(i = 0; i < count; i++)
    {
        for(j = 0; j < 3; j++)
        {
            fprintf(ctPtr, "%d ", array1[i][j]);
        }
        
        fprintf(ctPtr, "\n");
    }
    
    return 0;
    

}

#include <stdio.h>
#define SIZE 7
int main (void)
{
    int array1[SIZE] = {2, 4, 6, 8, 10, 12, 14};
    int array2[SIZE] = {0};
    int array3[SIZE] = {0};
    
    int i;
    
    for (i = 0; i < SIZE; i++)
    {
        array2[i] = array1[i] * array1[i];
    }
    for (i = 0; i < SIZE; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    
    int total = 0;
    
    for (i = 0; i < SIZE; i++)
    {
        
        total += array3[i];
        
        printf("\n%d   %d", i, array3[i]);
    }
    printf("\ntotal of rray 3 element is : %d\n", total);
    
    return 0;
}

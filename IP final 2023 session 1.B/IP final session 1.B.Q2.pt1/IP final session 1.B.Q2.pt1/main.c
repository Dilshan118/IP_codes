#include <stdio.h>
#define SIZE 7
int main (void)
{
    int i, j;
    int array1[SIZE] = {0}, array2[SIZE] = {0}, array3[SIZE] = {0};
    
    for ( i = 0; i < SIZE; i++ )
    {
        printf( "Insert array1[%d] : ", i );
        scanf( "%d", &array1[i] );
    }
    
    for ( i = SIZE - 1; i >= 0; i-- )
    {
        
        array2[6 - i] = array1[i];
    }
    for ( i = 0; i <= SIZE; i++ )
    {
        array3[i] = array1[i] * array2[i];
    }
    
    printf( "\n" );
    
    for ( i = 0; i < SIZE; i++ )
    {
        printf( "%d", array3[i] );
        
        printf( "\n" );
    }
    printf( "\n" );
    
    return 0;
}

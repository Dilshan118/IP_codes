/*Exercise 4: Practice to manipulate data in arrays
Write a C program that read numbers from an integer array and graph the information in the
form of bar chat. Sample output is given below.
 
Element Value Histogram
0 19 *******************
1 3 ***
2 15 ***************
3 7 *******
4 11 ***********
5 9 *********
6 13 *************
7 5 *****
8 17 *****************
9 1  * */

#include <stdio.h>
int main (void)
{
    int value[10];
    int i, j;
    
    for (i = 0; i < 10; i++)
    {
        printf("element value[%d] : ",i);
        scanf("%d", &value[i]);
        
    }
    printf("\nElemant\tvalue\tHistogram\n");
    
    for (i= 0; i < 10; i++ )
    {
        printf("%d\t\t", i);
        printf("%d\t\t",value[i]);
        
        for (j = 1; j <= value[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    int num;
    char start[20], destination[20];
    int distance;
    
    FILE * ctPtr; //declare a file pointer
    
    ctPtr = fopen("hire.txt", "w"); //can use w and a
    
    if (ctPtr == NULL)
    {
        printf("ur file is not opend..");
        return -1;
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the hire number. , start, destination and distance : ");
        scanf("%d %s %s %d", &num, start,destination, &distance);
        
        fprintf(ctPtr, "%d\t%s\t%s\t%d\n", num, start, destination, distance);
    }
    
    fclose(ctPtr);
    
    return 0;
}


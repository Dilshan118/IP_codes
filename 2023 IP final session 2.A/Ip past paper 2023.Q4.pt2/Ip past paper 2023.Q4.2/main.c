#include <stdio.h>
int main(void)
{
    int num, distance;
    char start[20], destination[20];
    float amount = 0, totalAmount =0;
    
    FILE * fctPtr; //declare a file pointer
    
    fctPtr = fopen("hire.txt", "r"); //can use w and a
    
    if (fctPtr == NULL)
    {
        printf("ur file is not opend..");
        return -1;
    }
    
    fscanf(fctPtr, "%d %s %s %d", &num, start, destination, &distance);
    
    while (!feof(fctPtr)) //checking the end of the file
    {
        amount = distance * 150.0;
        
        printf("%d\t", num );
        printf("%.2f", amount);
        
        totalAmount = totalAmount + amount;
        
        fscanf(fctPtr, "%d %s %s %d", &num, start, destination, &distance);
    }
    printf("total amount is : %.2f", totalAmount);
    
    fclose(fctPtr);
    
    return 0;
}

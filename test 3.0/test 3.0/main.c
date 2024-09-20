#include <stdio.h>
int main (void)
{
    int type, qty;
    float total;
    float totalCost;
    
    printf("enter item type : ");
    scanf("%d", &type);
    
    printf("enter quantity : ");
    scanf("%d", & qty);
    
    while (type != -99) 
    {
        printf("enter quantity : ");
        scanf("%d", & qty);
        
        if (type == 1)
        {
            total = qty * 30.00;
        }
        else if (type == 2)
        {
            total = qty * 45.00;
        }
        else if (type == 3)
        {
            total = qty * 55.00;
        }
        else
        {
            printf("Invalid type !");
        }
        totalCost += total;
        
        printf("Enter item type : ");
        scanf("%d", &type);
        
    }
    
    printf("total price : %.2f", totalCost);
    
    return 0;
}

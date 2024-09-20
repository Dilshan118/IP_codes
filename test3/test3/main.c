#include <stdio.h>
int main(void)
{
    int qty, type;
    float discount, total;
    
    printf("Enter the pizza type : ");
    scanf("%d", &type);
    
    printf("Enter the quantity : ");
    scanf("%d", &qty);
    
    while (type != -1)
    {
        if (type == 1)
        {
            if (qty > 3)
            {
                total = qty * 1000.00;
                
                discount = total * 0.1;
                
                total -= discount;
            }
            else
            {
                total = 1000 * qty;
            }
        }
        else if (type == 2 )
        {
            if (qty > 3)
            {
                total = qty * 1600.00;
                
                discount =  total * 0.12;
                
                total -= discount;
            }
            else
            {
                total = qty * 1600.00;
            }
        }
        else if (type == 3)
        {
            if (qty > 3)
            {
                total = qty * 1400.00;
                
                discount =  total * 0.15;
                
                total -= discount;
            }
            else
            {
                total = qty * 1400.00;
            }
        }
        else
        {
            printf("Invalid type!");
        }
        
        printf("Total is : %.2f", total);
        
        printf("\nEnter the pizza type : ");
        scanf("%d", &type);
        
        printf("Enter the quantity : ");
        scanf("%d", &qty);
    }
    
    return 0;
}

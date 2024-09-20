#include <stdio.h>
int main (void)
{
    int type, no_of_pizza;
    char size;
    float cost1 = 0.0, cost2 = 0.0, cost3 = 0.0, cost4 = 0.0;
    char payMethod, loyality, orderType;
    float totalBill= 0.0, netAmount = 0.0, discountPercentage = 0.0, discountPrice = 0.0;
    
    
    printf("Input pizza type : ");
    scanf("%d", &type);
    
    while (type != -1)
    {
        printf("Input pizza size : ");
        scanf(" %c", &size);
        
        if (type < 0 || type > 2 || (size != 'L' && size != 'M') )
        {
            printf("\nInvalid pizza type or size, Enter again.\n");
            
            
            printf("\nInput pizza type : ");
            scanf("%d", &type);
            
            continue;
            
        }
        else
        {
            printf("Enter the number of pizzas : ");
            scanf("%d", &no_of_pizza);
            
            if (type == 1)
            {
                if (size == 'M')
                {
                    cost1 += (975.0 * no_of_pizza);
                }
                else if (size == 'L')
                {
                    cost2 += (1720.0 * no_of_pizza);
                }
            }
            else if (type == 2)
            {
                if (size == 'M')
                {
                    cost3 += (1000.0 * no_of_pizza);
                }
                else if (size == 'L')
                {
                    cost4 += (1820.0 * no_of_pizza);
                }
            }
                
                printf("\nInput pizza type : ");
                scanf("%d", &type);
            
        }
    }
    
    printf("\nAre u paying by credit card (Y/N) : ");
    scanf(" %c", &payMethod);
    
    printf("Are u a loyality customer (Y/N) : ");
    scanf(" %c", &loyality);
    
    printf("Is this a online order (Y/N) : ");
    scanf(" %c", &orderType);
    
    if (payMethod == 'Y')
    {
        discountPercentage = 0.2;
    }
    else if (payMethod == 'N' && loyality == 'Y')
    {
        discountPercentage = 0.15;
    }
    else if (payMethod == 'N' && loyality == 'N' && orderType == 'Y')
    {
        discountPercentage = 0.05;
    }
    else
    {
        discountPercentage = 0.00;
    }
    
    totalBill = cost1 + cost2 + cost3 + cost4;
    
    discountPrice = totalBill * discountPercentage;
    
    netAmount = totalBill - discountPrice;
    
    printf("\nTotal bill amount : %.2f\n", totalBill);
    printf("Discount : %.2f\n", discountPrice);
    printf("Net amount : %.2f\n", netAmount);
    
    return 0;
    
}

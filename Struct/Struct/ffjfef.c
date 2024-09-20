#include <stdio.h>
struct item
{
    int qty;
    float price, total;
};

int main(void)
{
    float totalPrice = 0;
    
    struct item item[5];
    
    int i;
    
    for (i = 0; i < 5; i++)
    {
        
        printf("Enter the details of item %d;\n", i+1);
        
        printf("Enter the price of item %d: ", i+1);
        scanf("%f", &item[i].price);
        
        printf("Enter the qty of item %d: ", i+1);
        scanf("%d", &item[i].qty);
        
        item[i].total = item[i].price * item[i].qty;
        
        totalPrice += item[i].total;
        
        printf("\n");
        
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("item %d;\n", i+1);
        printf("price: %.2f\n", item[i].price);
        printf("qty: %d\n", item[i].qty);
        printf("total: %.2f\n", item[i].total);
        
        printf("\n");
        
    }
    printf("total cost: %.2f\n", totalPrice);
    
    return 0;
}

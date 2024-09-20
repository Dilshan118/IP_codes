#include <stdio.h>

int main(void)
{
    int type;
    float billAmount, discount, total;

    printf("Customer type (1 or 2): ");
    scanf("%d", &type);

    printf("Bill amount: ");
    scanf("%f", &billAmount);

    if (type == 1)
    {
        if (billAmount <= 2500)
        {
            discount = billAmount * 0.05;
        }
        else
        {
            discount = billAmount * 0.1;
        }
    }
    else if (type == 2)
    {
        if (billAmount > 5000)
        {
            discount = billAmount * 0.1;
        }
        else
        {
            discount = 0.0;
        }
    }
    else
    {
        printf("Invalid customer type.\n");
        return 1;
    }

    total = billAmount - discount;
    printf("Final bill amount: %.2f\n", total);

    return 0;
}


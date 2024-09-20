#include <stdio.h>
#define SIZE 5
int main (void)
{
    double sales[SIZE];
    double saleAmount = 0.0;
    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("Input the sales of salesamn %d : ", i+1);
        scanf("%lf", &saleAmount);
        
        sales[i] = saleAmount;
        
        if (saleAmount < 0)
        {
            printf("Invalid Input!\n");
            --i;
        }
    }
    printf("\nSalse person Number\t\tsales Amount\n");
    
    for (i = 0; i < 5; i++)
    {
        if (sales[i] > 20000.00)
        {
            printf("%d\t\t\t\t\t\t%.2lf\n", i+1, sales[i]);
        }
    }
    return 0;
}

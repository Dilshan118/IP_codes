/*Write a C program to input the type of customer 1( - Domestic customer and -2 Samurdhi customer) and the number of electricity units used for a month. The program should calculate the electricity bill as follows.
 
For first 100 units
Rs. 10.00/unit For units above 100 Rs.30.00/unit
An additional surcharge of 20% is added for Domestic customers who have exceeded 100 units.*/

#include <stdio.h>
int main(void)
{
    int type, unit, total;
    
    printf("coustomer type : ");
    scanf("%d", &type);
    
    printf("Number of units : ");
    scanf("%d", &unit);
    
    if (type == 1) {
        if (unit > 100) {
            total = 100 * 10 + (unit - 100) * 30;
            
            total = total + total * 0.2 ;
            
            printf("Monthly charge : %d\n", total);
            
        }
        else
        {
            total = unit * 10;
            
            printf("Monthly charge : %d\n", total);
        }
    }
    else if (type == 2)
    {
        if (unit > 100) {
            total = 100 * 10 + (unit - 100) * 30;
            
            printf("Monthy charge : %d\n", total);
        }
        else
        {
            total = unit * 10;
            
            printf("Monthly charge : %d\n", total);
        }
    }
    return 0;
}

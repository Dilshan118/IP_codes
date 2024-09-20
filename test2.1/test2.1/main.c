#include <stdio.h>
int main (void)
{
    int hours;
    float salary;
    
    printf("over time hours : ");
    scanf("%d", &hours);
    
    if (hours <= 5) {
        salary = 200.00 * hours;
    }
    else if (hours > 5 && hours <= 10)
    {
        salary = 300.00 * hours;
    }
    else if (hours > 10 && hours <= 15)
    {
        salary = 400.00 * hours;
    }
}

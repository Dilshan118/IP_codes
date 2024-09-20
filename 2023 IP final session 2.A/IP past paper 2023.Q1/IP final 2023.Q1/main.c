#include <stdio.h>
int main (void)
{
    int num1, num2;
    
    //promt for first positive intiger user input
    printf("Enter the first positive intiger : ");
    scanf("%d", &num1);
    
    //check the validation of the fist intiger
    while (num1 < 0)
    {
        printf("Invalid input!\nEnter fist positive intiger again : ");
        scanf("%d", &num1);
    }
    
    //promt for second positive intiger user input
    printf("Enter the second intiger : ");
    scanf("%d", &num2);
    
    //check the validation of the second intiger
    while (num2 < 0)
    {
        printf("Invalid input!\nEnter second positive intiger again : ");
        scanf("%d", &num2);
    }
    
    if (num1 < num2)
    {
        int sum = 0;
        
        //iterate 
        for (int  value = num1; value <= num2; value++)
        {
            
            if (value % 4 == 0)
            {
                printf("%d  ", value);
                sum += value;
            }
        }
        
        printf("\nThe sum of between %d and %d that are divided by 4 : %d\n", num1, num2, sum);
    }
    else if (num1 > num2)
    {
        int sum = 0;
        
        for (int  value = num2; value <= num1; value++)
        {
            
            if (value % 4 == 0)
            {
                printf("%d  ", value);
                sum += value;
            }
        }
        printf("\nThe sum of between %d and %d is : %d\n", num2, num1, sum);
    }
    
    return 0;
}

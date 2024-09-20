#include <stdio.h>
int main (void)
{
    int type;
    int no_of_people;
    int total_cost;
    
    printf("Enter the package type : ");
    scanf("%d",&type);
    
    printf("Enter the number of people : ");
    scanf("%d", &no_of_people);
    
    switch (type) {
        case 1:
            total_cost = no_of_people * 2000;
            printf("Total cost is : %d\n", total_cost);
            
            break;
         
        case 2:
            total_cost = no_of_people * 5000;
            printf("Total cost is : %d\n", total_cost);
            
            break;
        
        case 3:
            total_cost = no_of_people * 7000;
            printf("Total cost is : %d\n", total_cost);
            
            break;
            
        default:
            printf("Invalid input\n");
            break;
    }
    
    return 0;
}

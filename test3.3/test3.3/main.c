#include <stdio.h>

int main(void) {
    char choice;
    
    do {
        int score, total = 0;
        float average;
        
        for (int round = 1; round <= 3; round++) {
            printf("Enter score for round %d: ", round);
            scanf("%d", &score);
            total += score;
        }
        
        average = (float)total / 3;
        printf("Average score: %.2f\n", average);
        
        printf("Do you want to enter scores for another player? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}


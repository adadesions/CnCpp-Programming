#include "stdio.h"

int main() {
    // Lottory
    // [/] 1. Set Reward No.
    // [/] 2. User buy a lottory ticket
    // [/] 3. Check is the ticket mathch the reward
    // [/] 4. If won, spent $100M, else display some text.

    char reward[2];
    printf("Please set the reward no: ");
    scanf("%s", &reward);
    printf("=====================================\n");

    char buyerTicker[2]; 
    printf("Please select a number between 00-99: ");
    scanf("%s", &buyerTicker);
    printf("Confirm ? : %s\n", buyerTicker);
    
    char confirm;
    printf("[Y/n]: ");
    scanf("%s", &confirm);

    if (confirm == 'Y' || confirm == 'y') {
        printf("Please wait a minute, we're checking for your ticket...\n");

        // Checking lotto
        bool isWon = true;
        for (int i=0; i<2; i++) {
            if (reward[i] != buyerTicker[i]) {
                isWon = false;
                break;
            }
        }

        if (isWon) {
            printf("You're Winner!!!, you've got $100M\n");
        } else {
            printf("We're apologize, please try again next time T-T...\n");
        }
    }



    return 0;
}

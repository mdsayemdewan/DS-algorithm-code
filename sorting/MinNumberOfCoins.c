#include <stdio.h>
#include <limits.h>

void findMinCoins(int coins[], int numCoins, int targetAmount) {
    if (targetAmount < 0) {
        printf("Invalid input. Please enter a non-negative amount.\n");
        return;
    }

    int dp[targetAmount + 1];

    for (int i = 0; i <= targetAmount; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= targetAmount; i++) {
        for (int j = 0; j < numCoins; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = (dp[i] < dp[i - coins[j]] + 1) ? dp[i] : dp[i - coins[j]] + 1;
            }
        }
    }

    if (dp[targetAmount] == INT_MAX) {
        printf("It is not possible to make the amount with the given coins.\n");
    } else {
        printf("The minimum number of coins required: %d\n", dp[targetAmount]);
    }
}

int main() {
    int numCoins;
    printf("Enter the number of different coin denominations: ");
    scanf("%d", &numCoins);

    int coins[numCoins];

    printf("Enter the coin denominations:\n");
    for (int i = 0; i < numCoins; i++) {
        printf("Coin %d: ", i + 1);
        scanf("%d", &coins[i]);
    }

    int targetAmount;
    printf("Enter the target amount: ");
    scanf("%d", &targetAmount);

    findMinCoins(coins, numCoins, targetAmount);

    return 0;
}

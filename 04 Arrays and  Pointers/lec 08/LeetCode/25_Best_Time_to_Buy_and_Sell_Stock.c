/*
============================================================
  LEETCODE 121: BEST TIME TO BUY AND SELL STOCK (Easy)
============================================================
You are given an array prices where prices[i] is the price of
a given stock on the ith day.

You want to maximize your profit by choosing a single day to
buy one stock and choosing a different day in the future to
sell that stock.

Return the maximum profit you can achieve from this transaction.
If you cannot achieve any profit, return 0.

Example:
  Input: prices = [7,1,5,3,6,4]
  Output: 5
  Explanation: Buy on day 2 (price = 1) and sell on day 5
  (price = 6), profit = 6-1 = 5.

Approach: Min-price tracking (single pass)
  - Track the minimum price seen so far
  - For each day, calculate potential profit (current price - min price)
  - Update max profit if current profit is larger

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find maximum profit
int maxProfit(int *prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // Update minimum price seen so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate potential profit
        int currentProfit = prices[i] - minPrice;

        // Update max profit if current is larger
        if (currentProfit > maxProfit) {
            maxProfit = currentProfit;
        }
    }

    return maxProfit;
}

int main() {
    // Test case 1
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;
    printf("Test 1: prices = [7,1,5,3,6,4]\n");
    printf("Max profit: %d\n\n", maxProfit(prices1, size1));

    // Test case 2 - decreasing prices (no profit)
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;
    printf("Test 2: prices = [7,6,4,3,1] (decreasing)\n");
    printf("Max profit: %d\n\n", maxProfit(prices2, size2));

    // Test case 3 - single day
    int prices3[] = {5};
    int size3 = 1;
    printf("Test 3: prices = [5] (single day)\n");
    printf("Max profit: %d\n\n", maxProfit(prices3, size3));

    // Test case 4 - increasing prices
    int prices4[] = {1, 2, 3, 4, 5};
    int size4 = 5;
    printf("Test 4: prices = [1,2,3,4,5] (increasing)\n");
    printf("Max profit: %d\n", maxProfit(prices4, size4));

    return 0;
}

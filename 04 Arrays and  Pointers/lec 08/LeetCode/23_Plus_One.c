/*
============================================================
  LEETCODE 66: PLUS ONE (Easy)
============================================================
You are given a large integer represented as an integer array
digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant
in left-to-right order. The large integer does not contain any
leading 0's.

Increment the large integer by one and return the resulting
array of digits.

Example:
  Input: digits = [1,2,3]
  Output: [1,2,4]
  Explanation: The array represents the integer 123.
  Incrementing by one gives 124.

Approach: Traverse from the end
  - Start from the last digit
  - Add 1 to the last digit
  - If it becomes 10, set to 0 and carry to the next digit
  - If all digits become 0, need to add a new leading 1

Time Complexity: O(n)
Space Complexity: O(1) (excluding output)
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Function to add one to the number represented by digits
int *plusOne(int *digits, int digitsSize, int *returnSize) {
    // Traverse from the last digit
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            // No carry needed, just increment and return
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        // Current digit is 9, set to 0 and carry
        digits[i] = 0;
    }

    // If we reach here, all digits were 9 (e.g., 999 -> 1000)
    // Need to allocate a new array with one extra digit
    int *result = (int *)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}

// Helper function to print array
void printArray(int *nums, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

int main() {
    // Test case 1
    int digits1[] = {1, 2, 3};
    int size1 = 3;
    int returnSize1;
    int *result1 = plusOne(digits1, size1, &returnSize1);
    printf("Test 1: digits = ");
    printArray(digits1, size1);
    printf("\nOutput: ");
    printArray(result1, returnSize1);
    printf("\n\n");

    // Test case 2 - ends with 9
    int digits2[] = {4, 3, 2, 1};
    int size2 = 4;
    int returnSize2;
    int *result2 = plusOne(digits2, size2, &returnSize2);
    printf("Test 2: digits = ");
    printArray(digits2, size2);
    printf("\nOutput: ");
    printArray(result2, returnSize2);
    printf("\n\n");

    // Test case 3 - all 9s (carry overflow)
    int digits3[] = {9, 9, 9};
    int size3 = 3;
    int returnSize3;
    int *result3 = plusOne(digits3, size3, &returnSize3);
    printf("Test 3: digits = ");
    printArray(digits3, size3);
    printf("\nOutput: ");
    printArray(result3, returnSize3);
    printf("\n\n");

    // Test case 4 - single digit 9
    int digits4[] = {9};
    int size4 = 1;
    int returnSize4;
    int *result4 = plusOne(digits4, size4, &returnSize4);
    printf("Test 4: digits = ");
    printArray(digits4, size4);
    printf("\nOutput: ");
    printArray(result4, returnSize4);
    printf("\n");

    return 0;
}

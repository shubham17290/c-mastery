/*
============================================================
  LEETCODE 268: MISSING NUMBER (Easy)
============================================================
Given an array nums containing n distinct numbers in the range
[0, n], return the only number in the range that is missing
from the array.

Example:
  Input: nums = [3,0,1]
  Output: 2
  Explanation: n = 3 since there are 3 numbers, so all numbers
  are in the range [0,3]. 2 is the missing number.

Approach: XOR method
  - XOR all numbers from 0 to n
  - XOR all numbers in the array
  - The result is the missing number
  (Since a ^ a = 0 and a ^ 0 = a)

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find the missing number using XOR
int missingNumber(int *nums, int numsSize) {
    int result = 0;

    // XOR all indices (0 to n)
    for (int i = 0; i <= numsSize; i++) {
        result ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}

int main() {
    // Test case 1
    int nums1[] = {3, 0, 1};
    int size1 = 3;
    printf("Test 1: nums = [3,0,1]\n");
    printf("Missing number: %d\n\n", missingNumber(nums1, size1));

    // Test case 2
    int nums2[] = {0, 1};
    int size2 = 2;
    printf("Test 2: nums = [0,1]\n");
    printf("Missing number: %d\n\n", missingNumber(nums2, size2));

    // Test case 3
    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int size3 = 9;
    printf("Test 3: nums = [9,6,4,2,3,5,7,0,1]\n");
    printf("Missing number: %d\n\n", missingNumber(nums3, size3));

    // Test case 4 - missing 0
    int nums4[] = {1, 2, 3};
    int size4 = 3;
    printf("Test 4: nums = [1,2,3]\n");
    printf("Missing number: %d\n", missingNumber(nums4, size4));

    return 0;
}

/*
============================================================
  LEETCODE 189: ROTATE ARRAY (Medium)
============================================================
Given an integer array nums, rotate the array to the right
by k steps, where k is non-negative.

Example:
  Input: nums = [1,2,3,4,5,6,7], k = 3
  Output: [5,6,7,1,2,3,4]
  Explanation:
    rotate 1 step to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]

Approach: Reversal Algorithm
  1. Reverse the entire array
  2. Reverse the first k elements
  3. Reverse the remaining n-k elements

Example with [1,2,3,4,5,6,7], k=3:
  Step 1: Reverse all -> [7,6,5,4,3,2,1]
  Step 2: Reverse first 3 -> [5,6,7,4,3,2,1]
  Step 3: Reverse last 4 -> [5,6,7,1,2,3,4] ✓

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Helper function to reverse a portion of the array
void reverse(int *nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k steps
void rotate(int *nums, int numsSize, int k) {
    // Handle case where k > numsSize
    k = k % numsSize;

    if (k == 0) {
        return;
    }

    // Step 1: Reverse the entire array
    reverse(nums, 0, numsSize - 1);

    // Step 2: Reverse the first k elements
    reverse(nums, 0, k - 1);

    // Step 3: Reverse the remaining n-k elements
    reverse(nums, k, numsSize - 1);
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
    int nums1[] = {1, 2, 3, 4, 5, 6, 7};
    int size1 = 7;
    int k1 = 3;
    printf("Test 1: nums = ");
    printArray(nums1, size1);
    printf(", k = %d\n", k1);
    rotate(nums1, size1, k1);
    printf("Output: ");
    printArray(nums1, size1);
    printf("\n\n");

    // Test case 2
    int nums2[] = {-1, -100, 3, 99};
    int size2 = 4;
    int k2 = 2;
    printf("Test 2: nums = ");
    printArray(nums2, size2);
    printf(", k = %d\n", k2);
    rotate(nums2, size2, k2);
    printf("Output: ");
    printArray(nums2, size2);
    printf("\n\n");

    // Test case 3 - k > array size
    int nums3[] = {1, 2, 3};
    int size3 = 3;
    int k3 = 4;
    printf("Test 3: nums = ");
    printArray(nums3, size3);
    printf(", k = %d (k > size)\n", k3);
    rotate(nums3, size3, k3);
    printf("Output: ");
    printArray(nums3, size3);
    printf("\n");

    return 0;
}

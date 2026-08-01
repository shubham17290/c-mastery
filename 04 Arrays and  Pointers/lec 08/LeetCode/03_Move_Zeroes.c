/*
============================================================
  LEETCODE 283: MOVE ZEROES (Easy)
============================================================
Given an integer array nums, move all 0's to the end of it
while maintaining the relative order of the non-zero elements.

Note: You must do this in-place without making a copy of the array.

Example:
  Input: nums = [0,1,0,3,12]
  Output: [1,3,12,0,0]

Approach: Two-pointer technique
  - Use a pointer (nonZeroIndex) to track where the next non-zero
    element should be placed
  - Scan through the array; when we find a non-zero element,
    place it at nonZeroIndex and increment nonZeroIndex
  - After the scan, fill the remaining positions with 0

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to move all zeroes to the end
void moveZeroes(int *nums, int numsSize) {
    // Pointer to track position for next non-zero element
    int nonZeroIndex = 0;

    // First pass: move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }

    // Second pass: fill the remaining positions with 0
    for (int i = nonZeroIndex; i < numsSize; i++) {
        nums[i] = 0;
    }
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
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    printf("Test 1: nums = ");
    printArray(nums1, size1);
    moveZeroes(nums1, size1);
    printf(" -> ");
    printArray(nums1, size1);
    printf("\n\n");

    // Test case 2
    int nums2[] = {0};
    int size2 = 1;
    printf("Test 2: nums = ");
    printArray(nums2, size2);
    moveZeroes(nums2, size2);
    printf(" -> ");
    printArray(nums2, size2);
    printf("\n\n");

    // Test case 3 - no zeroes
    int nums3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    printf("Test 3: nums = ");
    printArray(nums3, size3);
    moveZeroes(nums3, size3);
    printf(" -> ");
    printArray(nums3, size3);
    printf("\n\n");

    // Test case 4 - all zeroes
    int nums4[] = {0, 0, 0, 0};
    int size4 = 4;
    printf("Test 4: nums = ");
    printArray(nums4, size4);
    moveZeroes(nums4, size4);
    printf(" -> ");
    printArray(nums4, size4);
    printf("\n");

    return 0;
}

/*
============================================================
  LEETCODE 442: FIND ALL DUPLICATES IN AN ARRAY (Medium)
============================================================
Given an integer array nums of length n where all the integers
of nums are in the range [1, n] and each integer appears once
or twice, return an array of all the integers that appears twice.

Example:
  Input: nums = [4,3,2,7,8,2,3,1]
  Output: [2,3]

Approach: Index-as-pointer trick (Negation method)
  - For each element nums[i], use its value as an index
  - If the value at that index is positive, negate it (mark as seen)
  - If the value at that index is already negative, it's a duplicate

Time Complexity: O(n)
Space Complexity: O(1) (excluding output)
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Function to find all duplicates
// Returns the count of duplicates found
int findDuplicates(int *nums, int numsSize, int *result) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        // Get the index (1-based value, so subtract 1)
        int index = abs(nums[i]) - 1;

        // If the value at index is negative, it's a duplicate
        if (nums[index] < 0) {
            result[count++] = abs(nums[i]);
        } else {
            // Mark as seen by negating
            nums[index] = -nums[index];
        }
    }

    return count;
}

int main() {
    // Test case 1
    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size1 = 8;
    int result1[8];
    int count1 = findDuplicates(nums1, size1, result1);
    printf("Test 1: nums = [4,3,2,7,8,2,3,1]\n");
    printf("Duplicates: [");
    for (int i = 0; i < count1; i++) {
        printf("%d", result1[i]);
        if (i < count1 - 1) printf(", ");
    }
    printf("]\n\n");

    // Test case 2
    int nums2[] = {1, 1, 2};
    int size2 = 3;
    int result2[3];
    int count2 = findDuplicates(nums2, size2, result2);
    printf("Test 2: nums = [1,1,2]\n");
    printf("Duplicates: [");
    for (int i = 0; i < count2; i++) {
        printf("%d", result2[i]);
        if (i < count2 - 1) printf(", ");
    }
    printf("]\n\n");

    // Test case 3 - no duplicates
    int nums3[] = {1, 2, 3, 4};
    int size3 = 4;
    int result3[4];
    int count3 = findDuplicates(nums3, size3, result3);
    printf("Test 3: nums = [1,2,3,4] (no duplicates)\n");
    printf("Duplicates: [");
    for (int i = 0; i < count3; i++) {
        printf("%d", result3[i]);
        if (i < count3 - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

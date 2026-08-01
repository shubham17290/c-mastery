/*
============================================================
  LEETCODE 1: TWO SUM (Easy)
============================================================
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.

Example:
  Input: nums = [2,7,11,15], target = 9
  Output: [0,1]
  Explanation: nums[0] + nums[1] = 2 + 7 = 9

Approach: Two-pointer on sorted array (with index tracking)
Time Complexity: O(n log n) due to sorting
Space Complexity: O(n) for storing pairs
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to store value and its original index
typedef struct {
    int value;
    int index;
} Pair;

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return ((Pair *)a)->value - ((Pair *)b)->value;
}

// Function to find two sum indices
void twoSum(int *nums, int numsSize, int target, int *result) {
    Pair *pairs = (Pair *)malloc(numsSize * sizeof(Pair));

    // Store values with their original indices
    for (int i = 0; i < numsSize; i++) {
        pairs[i].value = nums[i];
        pairs[i].index = i;
    }

    // Sort the pairs by value
    qsort(pairs, numsSize, sizeof(Pair), compare);

    // Two-pointer approach
    int left = 0, right = numsSize - 1;
    while (left < right) {
        int sum = pairs[left].value + pairs[right].value;
        if (sum == target) {
            result[0] = pairs[left].index;
            result[1] = pairs[right].index;
            free(pairs);
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    free(pairs);
}

int main() {
    // Test case 1
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int result1[2];
    twoSum(nums1, 4, target1, result1);
    printf("Test 1: nums = [2,7,11,15], target = 9\n");
    printf("Output: [%d, %d]\n\n", result1[0], result1[1]);

    // Test case 2
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int result2[2];
    twoSum(nums2, 3, target2, result2);
    printf("Test 2: nums = [3,2,4], target = 6\n");
    printf("Output: [%d, %d]\n\n", result2[0], result2[1]);

    // Test case 3
    int nums3[] = {3, 3};
    int target3 = 6;
    int result3[2];
    twoSum(nums3, 2, target3, result3);
    printf("Test 3: nums = [3,3], target = 6\n");
    printf("Output: [%d, %d]\n", result3[0], result3[1]);

    return 0;
}

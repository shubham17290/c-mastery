/*
============================================================
  LEETCODE 15: 3SUM (Medium)
============================================================
Given an integer array nums, return all the triplets
[nums[i], nums[j], nums[k]] such that i != j, i != k, and
j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example:
  Input: nums = [-1,0,1,2,-1,-4]
  Output: [[-1,-1,2],[-1,0,1]]

Approach: Sort + Two-pointer
  1. Sort the array
  2. Fix one element (i), then use two pointers (left, right)
     to find the other two elements
  3. Skip duplicates to avoid duplicate triplets

Time Complexity: O(n^2)
Space Complexity: O(1) (excluding output)
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find all triplets that sum to zero
// Returns the number of triplets found
int threeSum(int *nums, int numsSize, int **result) {
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    int count = 0;

    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicate values for i
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                // Found a triplet
                result[count][0] = nums[i];
                result[count][1] = nums[left];
                result[count][2] = nums[right];
                count++;

                // Skip duplicates for left
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                // Skip duplicates for right
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    // Test case 1
    int nums1[] = {-1, 0, 1, 2, -1, -4};
    int size1 = 6;
    int **result1 = (int **)malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++) {
        result1[i] = (int *)malloc(3 * sizeof(int));
    }

    int count1 = threeSum(nums1, size1, result1);
    printf("Test 1: nums = [-1,0,1,2,-1,-4]\n");
    printf("Triplets found: %d\n", count1);
    for (int i = 0; i < count1; i++) {
        printf("  [%d, %d, %d]\n", result1[i][0], result1[i][1], result1[i][2]);
    }
    printf("\n");

    // Test case 2
    int nums2[] = {0, 1, 1};
    int size2 = 3;
    int **result2 = (int **)malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++) {
        result2[i] = (int *)malloc(3 * sizeof(int));
    }

    int count2 = threeSum(nums2, size2, result2);
    printf("Test 2: nums = [0,1,1]\n");
    printf("Triplets found: %d\n", count2);
    for (int i = 0; i < count2; i++) {
        printf("  [%d, %d, %d]\n", result2[i][0], result2[i][1], result2[i][2]);
    }
    printf("\n");

    // Test case 3
    int nums3[] = {0, 0, 0};
    int size3 = 3;
    int **result3 = (int **)malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++) {
        result3[i] = (int *)malloc(3 * sizeof(int));
    }

    int count3 = threeSum(nums3, size3, result3);
    printf("Test 3: nums = [0,0,0]\n");
    printf("Triplets found: %d\n", count3);
    for (int i = 0; i < count3; i++) {
        printf("  [%d, %d, %d]\n", result3[i][0], result3[i][1], result3[i][2]);
    }

    // Free memory
    for (int i = 0; i < 10; i++) {
        free(result1[i]);
        free(result2[i]);
        free(result3[i]);
    }
    free(result1);
    free(result2);
    free(result3);

    return 0;
}

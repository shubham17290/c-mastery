/*
============================================================
  LEETCODE 53: MAXIMUM SUBARRAY (Easy)
============================================================
Given an integer array nums, find the subarray with the largest
sum, and return its sum.

Example:
  Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
  Output: 6
  Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Approach: Kadane's Algorithm
  - Maintain currentSum (max sum ending at current position)
  - Maintain maxSum (overall maximum sum found so far)
  - For each element:
    - currentSum = max(nums[i], currentSum + nums[i])
    - maxSum = max(maxSum, currentSum)
  - This works because if currentSum becomes negative,
    it's better to start a new subarray from the current element

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find maximum subarray sum (Kadane's Algorithm)
int maxSubArray(int *nums, int numsSize) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // Either extend the current subarray or start a new one
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }

        // Update max sum if current is larger
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    // Test case 1
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = 9;
    printf("Test 1: nums = [-2,1,-3,4,-1,2,1,-5,4]\n");
    printf("Max subarray sum: %d\n\n", maxSubArray(nums1, size1));

    // Test case 2 - all negative
    int nums2[] = {-1, -2, -3, -4};
    int size2 = 4;
    printf("Test 2: nums = [-1,-2,-3,-4] (all negative)\n");
    printf("Max subarray sum: %d\n\n", maxSubArray(nums2, size2));

    // Test case 3 - single element
    int nums3[] = {5};
    int size3 = 1;
    printf("Test 3: nums = [5] (single element)\n");
    printf("Max subarray sum: %d\n\n", maxSubArray(nums3, size3));

    // Test case 4 - all positive
    int nums4[] = {1, 2, 3, 4, 5};
    int size4 = 5;
    printf("Test 4: nums = [1,2,3,4,5] (all positive)\n");
    printf("Max subarray sum: %d\n", maxSubArray(nums4, size4));

    return 0;
}

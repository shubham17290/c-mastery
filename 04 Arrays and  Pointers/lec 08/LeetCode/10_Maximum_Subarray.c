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

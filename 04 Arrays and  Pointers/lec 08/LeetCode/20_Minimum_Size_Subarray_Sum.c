/*
============================================================
  LEETCODE 209: MINIMUM SIZE SUBARRAY SUM (Medium)
============================================================
Given an array of positive integers nums and a positive integer
target, return the minimal length of a subarray whose sum is
greater than or equal to target. If there is no such subarray,
return 0 instead.

Example:
  Input: target = 7, nums = [2,3,1,2,4,3]
  Output: 2
  Explanation: The subarray [4,3] has the minimal length
  under the problem constraint.

Approach: Sliding Window (Two pointers)
  - Use left pointer to mark the start of the window
  - Use right pointer to expand the window
  - Maintain running sum of the window
  - When sum >= target, try to shrink from left to minimize length

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find minimum size subarray sum
int minSubArrayLen(int target, int *nums, int numsSize) {
    int left = 0;
    int sum = 0;
    int minLength = numsSize + 1;  // Initialize to a large value

    for (int right = 0; right < numsSize; right++) {
        // Add current element to window sum
        sum += nums[right];

        // Shrink window from left while sum >= target
        while (sum >= target) {
            int currentLength = right - left + 1;
            if (currentLength < minLength) {
                minLength = currentLength;
            }

            // Remove leftmost element and move left
            sum -= nums[left];
            left++;
        }
    }

    // If minLength was never updated, return 0
    return (minLength == numsSize + 1) ? 0 : minLength;
}

int main() {
    // Test case 1
    int nums1[] = {2, 3, 1, 2, 4, 3};
    int target1 = 7;
    int size1 = 6;
    printf("Test 1: target = %d, nums = [2,3,1,2,4,3]\n", target1);
    printf("Min subarray length: %d\n\n", minSubArrayLen(target1, nums1, size1));

    // Test case 2
    int nums2[] = {1, 4, 4};
    int target2 = 4;
    int size2 = 3;
    printf("Test 2: target = %d, nums = [1,4,4]\n", target2);
    printf("Min subarray length: %d\n\n", minSubArrayLen(target2, nums2, size2));

    // Test case 3 - no subarray meets target
    int nums3[] = {1, 1, 1, 1, 1, 1, 1, 1};
    int target3 = 11;
    int size3 = 8;
    printf("Test 3: target = %d, nums = [1,1,1,1,1,1,1,1]\n", target3);
    printf("Min subarray length: %d\n\n", minSubArrayLen(target3, nums3, size3));

    // Test case 4 - single element meets target
    int nums4[] = {1, 2, 3, 4, 5};
    int target4 = 5;
    int size4 = 5;
    printf("Test 4: target = %d, nums = [1,2,3,4,5]\n", target4);
    printf("Min subarray length: %d\n", minSubArrayLen(target4, nums4, size4));

    return 0;
}

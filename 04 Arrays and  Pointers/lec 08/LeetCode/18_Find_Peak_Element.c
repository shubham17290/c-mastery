/*
============================================================
  LEETCODE 162: FIND PEAK ELEMENT (Medium)
============================================================
A peak element is an element that is strictly greater than
its neighbors.

Given a 0-indexed integer array nums, find a peak element,
and return its index. If the array contains multiple peaks,
return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -infinity.
In other words, an element is always considered to be strictly
greater than a neighbor that is outside the array.

Example:
  Input: nums = [1,2,3,1]
  Output: 2
  Explanation: 3 is a peak element and your function should
  return the index number 2.

Approach: Binary Search
  - Use binary search to find a peak
  - If mid element is less than its right neighbor,
    peak must be on the right side
  - Otherwise, peak is on the left side (including mid)

Time Complexity: O(log n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find a peak element using binary search
int findPeakElement(int *nums, int numsSize) {
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // If mid is less than its right neighbor,
        // peak is on the right side
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            // Otherwise, peak is on the left side (including mid)
            right = mid;
        }
    }

    return left;
}

int main() {
    // Test case 1
    int nums1[] = {1, 2, 3, 1};
    int size1 = 4;
    int peak1 = findPeakElement(nums1, size1);
    printf("Test 1: nums = [1,2,3,1]\n");
    printf("Peak index: %d (value: %d)\n\n", peak1, nums1[peak1]);

    // Test case 2
    int nums2[] = {1, 2, 1, 3, 5, 6, 4};
    int size2 = 7;
    int peak2 = findPeakElement(nums2, size2);
    printf("Test 2: nums = [1,2,1,3,5,6,4]\n");
    printf("Peak index: %d (value: %d)\n\n", peak2, nums2[peak2]);

    // Test case 3 - single element
    int nums3[] = {5};
    int size3 = 1;
    int peak3 = findPeakElement(nums3, size3);
    printf("Test 3: nums = [5] (single element)\n");
    printf("Peak index: %d (value: %d)\n\n", peak3, nums3[peak3]);

    // Test case 4 - strictly increasing
    int nums4[] = {1, 2, 3, 4, 5};
    int size4 = 5;
    int peak4 = findPeakElement(nums4, size4);
    printf("Test 4: nums = [1,2,3,4,5] (increasing)\n");
    printf("Peak index: %d (value: %d)\n", peak4, nums4[peak4]);

    return 0;
}

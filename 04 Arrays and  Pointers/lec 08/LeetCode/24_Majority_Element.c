/*
============================================================
  LEETCODE 169: MAJORITY ELEMENT (Easy)
============================================================
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than
⌊n / 2⌋ times. You may assume that the majority element always
exists in the array.

Example:
  Input: nums = [3,2,3]
  Output: 3

Approach: Boyer-Moore Voting Algorithm
  - Maintain a candidate and a count
  - When count is 0, set current element as candidate
  - If current element == candidate, increment count
  - Otherwise, decrement count
  - The candidate at the end is the majority element

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find the majority element (Boyer-Moore Voting)
int majorityElement(int *nums, int numsSize) {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {
    // Test case 1
    int nums1[] = {3, 2, 3};
    int size1 = 3;
    printf("Test 1: nums = [3,2,3]\n");
    printf("Majority element: %d\n\n", majorityElement(nums1, size1));

    // Test case 2
    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int size2 = 7;
    printf("Test 2: nums = [2,2,1,1,1,2,2]\n");
    printf("Majority element: %d\n\n", majorityElement(nums2, size2));

    // Test case 3 - all same
    int nums3[] = {5, 5, 5, 5};
    int size3 = 4;
    printf("Test 3: nums = [5,5,5,5]\n");
    printf("Majority element: %d\n\n", majorityElement(nums3, size3));

    // Test case 4 - single element
    int nums4[] = {7};
    int size4 = 1;
    printf("Test 4: nums = [7] (single element)\n");
    printf("Majority element: %d\n", majorityElement(nums4, size4));

    return 0;
}

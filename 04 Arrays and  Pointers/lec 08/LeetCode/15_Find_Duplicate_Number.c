/*
============================================================
  LEETCODE 287: FIND THE DUPLICATE NUMBER (Medium)
============================================================
Given an array of integers nums containing n + 1 integers
where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this
repeated number.

You must solve the problem without modifying the array nums
and using only constant extra space.

Example:
  Input: nums = [1,3,4,2,2]
  Output: 2

Approach: Floyd's Cycle Detection (Tortoise and Hare)
  - Treat the array as a linked list where nums[i] points to index nums[i]
  - Since there's a duplicate, there must be a cycle
  - Use slow and fast pointers to detect the cycle
  - Then find the start of the cycle (which is the duplicate)

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find the duplicate number
int findDuplicate(int *nums, int numsSize) {
    // Phase 1: Find the intersection point of the two runners
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find the entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    // Test case 1
    int nums1[] = {1, 3, 4, 2, 2};
    int size1 = 5;
    printf("Test 1: nums = [1,3,4,2,2]\n");
    printf("Duplicate: %d\n\n", findDuplicate(nums1, size1));

    // Test case 2
    int nums2[] = {3, 1, 3, 4, 2};
    int size2 = 5;
    printf("Test 2: nums = [3,1,3,4,2]\n");
    printf("Duplicate: %d\n\n", findDuplicate(nums2, size2));

    // Test case 3
    int nums3[] = {1, 1};
    int size3 = 2;
    printf("Test 3: nums = [1,1]\n");
    printf("Duplicate: %d\n\n", findDuplicate(nums3, size3));

    // Test case 4
    int nums4[] = {1, 1, 2};
    int size4 = 3;
    printf("Test 4: nums = [1,1,2]\n");
    printf("Duplicate: %d\n", findDuplicate(nums4, size4));

    return 0;
}

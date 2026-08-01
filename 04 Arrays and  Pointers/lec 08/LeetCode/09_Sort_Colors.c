/*
============================================================
  LEETCODE 75: SORT COLORS (Medium)
============================================================
Given an array nums with n objects colored red, white, or blue,
sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red,
white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example:
  Input: nums = [2,0,2,1,1,0]
  Output: [0,0,1,1,2,2]

Approach: Dutch National Flag Algorithm (3 pointers)
  - Use three pointers: low, mid, high
  - low tracks the boundary of 0s
  - mid scans through the array
  - high tracks the boundary of 2s
  - Invariant: [0, low) = 0s, [low, mid) = 1s, (high, end] = 2s

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort colors (Dutch National Flag)
void sortColors(int *nums, int numsSize) {
    int low = 0;    // boundary for 0s
    int mid = 0;    // current element being examined
    int high = numsSize - 1;  // boundary for 2s

    while (mid <= high) {
        if (nums[mid] == 0) {
            // Swap with low boundary and move both pointers
            swap(&nums[low], &nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            // 1 is in correct position, just move mid
            mid++;
        } else { // nums[mid] == 2
            // Swap with high boundary, move high down
            swap(&nums[mid], &nums[high]);
            high--;
            // Don't increment mid because the swapped element
            // from high hasn't been examined yet
        }
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
    int nums1[] = {2, 0, 2, 1, 1, 0};
    int size1 = 6;
    printf("Test 1: nums = ");
    printArray(nums1, size1);
    sortColors(nums1, size1);
    printf(" -> ");
    printArray(nums1, size1);
    printf("\n\n");

    // Test case 2
    int nums2[] = {2, 0, 1};
    int size2 = 3;
    printf("Test 2: nums = ");
    printArray(nums2, size2);
    sortColors(nums2, size2);
    printf(" -> ");
    printArray(nums2, size2);
    printf("\n\n");

    // Test case 3 - already sorted
    int nums3[] = {0, 0, 1, 1, 2, 2};
    int size3 = 6;
    printf("Test 3: nums = ");
    printArray(nums3, size3);
    sortColors(nums3, size3);
    printf(" -> ");
    printArray(nums3, size3);
    printf("\n\n");

    // Test case 4 - all same color
    int nums4[] = {1, 1, 1, 1};
    int size4 = 4;
    printf("Test 4: nums = ");
    printArray(nums4, size4);
    sortColors(nums4, size4);
    printf(" -> ");
    printArray(nums4, size4);
    printf("\n");

    return 0;
}

/*
============================================================
  LEETCODE 88: MERGE SORTED ARRAY (Easy)
============================================================
You are given two integer arrays nums1 and nums2, sorted in
non-decreasing order, and two integers m and n, representing
the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing
order.

The final sorted array should not be returned by the function,
but instead be stored inside the array nums1. To accommodate this,
nums1 has a length of m + n, where the first m elements denote
the elements that should be merged, and the last n elements are
set to 0 and should be ignored. nums2 has a length of n.

Example:
  Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
  Output: [1,2,2,3,5,6]

Approach: Merge from the end (Reverse two-pointer)
  - Start filling nums1 from the last position (m+n-1)
  - Use two pointers: i = m-1 (end of valid nums1), j = n-1 (end of nums2)
  - Compare from the back and place the larger element at the end
  - This avoids overwriting elements in nums1

Time Complexity: O(m + n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to merge two sorted arrays into nums1
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    // Pointers for nums1 and nums2 (from the end of valid elements)
    int i = m - 1;
    int j = n - 1;
    // Pointer for the last position in nums1
    int k = m + n - 1;

    // Merge from the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    // If there are remaining elements in nums1, they're already in place
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
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int m1 = 3;
    int nums2[] = {2, 5, 6};
    int n1 = 3;
    printf("Test 1: nums1 = ");
    printArray(nums1, 6);
    printf(", m = %d, nums2 = ", m1);
    printArray(nums2, 3);
    printf(", n = %d\n", n1);
    merge(nums1, 6, m1, nums2, 3, n1);
    printf("Merged: ");
    printArray(nums1, 6);
    printf("\n\n");

    // Test case 2 - nums1 empty
    int nums1b[] = {0};
    int m2 = 0;
    int nums2b[] = {1};
    int n2 = 1;
    printf("Test 2: nums1 = [0], m = 0, nums2 = [1], n = 1\n");
    merge(nums1b, 1, m2, nums2b, 1, n2);
    printf("Merged: ");
    printArray(nums1b, 1);
    printf("\n\n");

    // Test case 3 - nums2 empty
    int nums1c[] = {1};
    int m3 = 1;
    int nums2c[] = {};
    int n3 = 0;
    printf("Test 3: nums1 = [1], m = 1, nums2 = [], n = 0\n");
    merge(nums1c, 1, m3, nums2c, 0, n3);
    printf("Merged: ");
    printArray(nums1c, 1);
    printf("\n\n");

    // Test case 4 - duplicate values
    int nums1d[] = {2, 2, 3, 0, 0, 0};
    int m4 = 3;
    int nums2d[] = {1, 2, 4};
    int n4 = 3;
    printf("Test 4: nums1 = ");
    printArray(nums1d, 6);
    printf(", nums2 = ");
    printArray(nums2d, 3);
    printf("\n");
    merge(nums1d, 6, m4, nums2d, 3, n4);
    printf("Merged: ");
    printArray(nums1d, 6);
    printf("\n");

    return 0;
}

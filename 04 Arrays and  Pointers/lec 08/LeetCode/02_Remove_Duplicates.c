/*
============================================================
  LEETCODE 26: REMOVE DUPLICATES FROM SORTED ARRAY (Easy)
============================================================
Given an integer array nums sorted in non-decreasing order,
remove the duplicates in-place such that each unique element
appears only once. The relative order of the elements should
be kept the same.

Return the number of unique elements.

Example:
  Input: nums = [0,0,1,1,1,2,2,3,3,4]
  Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

Approach: Two-pointer technique
  - Use one pointer (i) to track the position of unique elements
  - Use another pointer (j) to scan through the array
  - When nums[j] != nums[i], increment i and copy nums[j] to nums[i]

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to remove duplicates and return new length
int removeDuplicates(int *nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    // i is the slow pointer (position of last unique element)
    // j is the fast pointer (scanning through array)
    int i = 0;

    for (int j = 1; j < numsSize; j++) {
        // If we find a new unique element
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    // Return the count of unique elements (i is 0-indexed)
    return i + 1;
}

int main() {
    // Test case 1
    int nums1[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size1 = 10;
    int newLen1 = removeDuplicates(nums1, size1);
    printf("Test 1: nums = [0,0,1,1,1,2,2,3,3,4]\n");
    printf("New length: %d\n", newLen1);
    printf("Array after: [");
    for (int i = 0; i < newLen1; i++) {
        printf("%d", nums1[i]);
        if (i < newLen1 - 1) printf(", ");
    }
    printf("]\n\n");

    // Test case 2
    int nums2[] = {1, 1, 2};
    int size2 = 3;
    int newLen2 = removeDuplicates(nums2, size2);
    printf("Test 2: nums = [1,1,2]\n");
    printf("New length: %d\n", newLen2);
    printf("Array after: [");
    for (int i = 0; i < newLen2; i++) {
        printf("%d", nums2[i]);
        if (i < newLen2 - 1) printf(", ");
    }
    printf("]\n\n");

    // Test case 3 - all unique
    int nums3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    int newLen3 = removeDuplicates(nums3, size3);
    printf("Test 3: nums = [1,2,3,4,5]\n");
    printf("New length: %d\n", newLen3);
    printf("Array after: [");
    for (int i = 0; i < newLen3; i++) {
        printf("%d", nums3[i]);
        if (i < newLen3 - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

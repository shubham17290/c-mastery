 /*
============================================================
  LEETCODE 27: REMOVE ELEMENT (Easy)
============================================================
Given an integer array nums and an integer val, remove all
occurrences of val in nums in-place. The order of the elements
may be changed. Then return the number of elements in nums
which are not equal to val.

Example:
  Input: nums = [3,2,2,3], val = 3
  Output: 2, nums = [2,2,_,_]

Approach: Two-pointer technique
  - Use a slow pointer (i) to track where to place non-val elements
  - Use a fast pointer (j) to scan through the array
  - When nums[j] != val, copy it to nums[i] and increment i

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to remove all occurrences of val
int removeElement(int *nums, int numsSize, int val) {
    int i = 0;  // slow pointer - position for next non-val element

    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
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
    int nums1[] = {3, 2, 2, 3};
    int size1 = 4;
    int val1 = 3;
    printf("Test 1: nums = ");
    printArray(nums1, size1);
    printf(", val = %d\n", val1);
    int newLen1 = removeElement(nums1, size1, val1);
    printf("New length: %d, Array: ", newLen1);
    printArray(nums1, newLen1);
    printf("\n\n");

    // Test case 2
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int size2 = 8;
    int val2 = 2;
    printf("Test 2: nums = ");
    printArray(nums2, size2);
    printf(", val = %d\n", val2);
    int newLen2 = removeElement(nums2, size2, val2);
    printf("New length: %d, Array: ", newLen2);
    printArray(nums2, newLen2);
    printf("\n\n");

    // Test case 3 - val not present
    int nums3[] = {1, 2, 3, 4};
    int size3 = 4;
    int val3 = 5;
    printf("Test 3: nums = ");
    printArray(nums3, size3);
    printf(", val = %d (not present)\n", val3);
    int newLen3 = removeElement(nums3, size3, val3);
    printf("New length: %d, Array: ", newLen3);
    printArray(nums3, newLen3);
    printf("\n");

    return 0;
}

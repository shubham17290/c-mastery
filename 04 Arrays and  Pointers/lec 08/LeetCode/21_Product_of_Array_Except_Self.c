/*
============================================================
  LEETCODE 238: PRODUCT OF ARRAY EXCEPT SELF (Medium)
============================================================
Given an integer array nums, return an array answer such that
answer[i] is equal to the product of all the elements of nums
except nums[i].

The product of any prefix or suffix of nums is guaranteed to
fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without
using the division operation.

Example:
  Input: nums = [1,2,3,4]
  Output: [24,12,8,6]

Approach: Prefix/Suffix product technique
  - First pass: compute prefix products (product of all elements to the left)
  - Second pass: multiply by suffix products (product of all elements to the right)
  - Use a single result array to store both

Time Complexity: O(n)
Space Complexity: O(1) (excluding output array)
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Function to compute product of array except self
int *productExceptSelf(int *nums, int numsSize, int *returnSize) {
    int *result = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // First pass: compute prefix products
    result[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] * nums[i - 1];
    }

    // Second pass: multiply by suffix products
    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        result[i] = result[i] * suffixProduct;
        suffixProduct = suffixProduct * nums[i];
    }

    return result;
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
    int nums1[] = {1, 2, 3, 4};
    int size1 = 4;
    int returnSize1;
    int *result1 = productExceptSelf(nums1, size1, &returnSize1);
    printf("Test 1: nums = ");
    printArray(nums1, size1);
    printf("\nOutput: ");
    printArray(result1, returnSize1);
    printf("\n\n");
    free(result1);

    // Test case 2 - contains zero
    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = 5;
    int returnSize2;
    int *result2 = productExceptSelf(nums2, size2, &returnSize2);
    printf("Test 2: nums = ");
    printArray(nums2, size2);
    printf("\nOutput: ");
    printArray(result2, returnSize2);
    printf("\n\n");
    free(result2);

    // Test case 3 - two elements
    int nums3[] = {2, 3};
    int size3 = 2;
    int returnSize3;
    int *result3 = productExceptSelf(nums3, size3, &returnSize3);
    printf("Test 3: nums = ");
    printArray(nums3, size3);
    printf("\nOutput: ");
    printArray(result3, returnSize3);
    printf("\n");
    free(result3);

    return 0;
}

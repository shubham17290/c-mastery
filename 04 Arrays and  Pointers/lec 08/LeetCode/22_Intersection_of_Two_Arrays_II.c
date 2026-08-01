/*
============================================================
  LEETCODE 350: INTERSECTION OF TWO ARRAYS II (Easy)
============================================================
Given two integer arrays nums1 and nums2, return an array of
their intersection. Each element in the result must appear as
many times as it shows in both arrays and you may return the
result in any order.

Example:
  Input: nums1 = [1,2,2,1], nums2 = [2,2]
  Output: [2,2]

Approach: Sort + Two-pointer merge
  - Sort both arrays
  - Use two pointers to traverse both arrays
  - When elements match, add to result and move both pointers
  - When one is smaller, move that pointer

Time Complexity: O(n log n + m log m) due to sorting
Space Complexity: O(1) (excluding output)
============================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find intersection of two arrays
int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize) {
    // Sort both arrays
    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);

    // Allocate result array (max size is min of both arrays)
    int maxSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int *result = (int *)malloc(maxSize * sizeof(int));

    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] == nums2[j]) {
            result[k++] = nums1[i];
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }

    *returnSize = k;
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
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int size1 = 4, size2 = 2;
    int returnSize1;
    int *result1 = intersect(nums1, size1, nums2, size2, &returnSize1);
    printf("Test 1: nums1 = [1,2,2,1], nums2 = [2,2]\n");
    printf("Intersection: ");
    printArray(result1, returnSize1);
    printf("\n\n");
    free(result1);

    // Test case 2
    int nums1b[] = {4, 9, 5};
    int nums2b[] = {9, 4, 9, 8, 4};
    int size1b = 3, size2b = 5;
    int returnSize2;
    int *result2 = intersect(nums1b, size1b, nums2b, size2b, &returnSize2);
    printf("Test 2: nums1 = [4,9,5], nums2 = [9,4,9,8,4]\n");
    printf("Intersection: ");
    printArray(result2, returnSize2);
    printf("\n\n");
    free(result2);

    // Test case 3 - no intersection
    int nums1c[] = {1, 2, 3};
    int nums2c[] = {4, 5, 6};
    int size1c = 3, size2c = 3;
    int returnSize3;
    int *result3 = intersect(nums1c, size1c, nums2c, size2c, &returnSize3);
    printf("Test 3: nums1 = [1,2,3], nums2 = [4,5,6] (no intersection)\n");
    printf("Intersection: ");
    printArray(result3, returnSize3);
    printf("\n");
    free(result3);

    return 0;
}

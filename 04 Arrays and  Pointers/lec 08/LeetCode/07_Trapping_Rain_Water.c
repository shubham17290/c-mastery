/*
============================================================
  LEETCODE 42: TRAPPING RAIN WATER (Hard)
============================================================
Given n non-negative integers representing an elevation map
where the width of each bar is 1, compute how much water it
can trap after raining.

Example:
  Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
  Output: 6
  Explanation: The above elevation map is represented by array
  [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water
  are being trapped.

Approach: Two-pointer technique
  - Use left and right pointers
  - Track leftMax and rightMax (highest bars seen so far)
  - Water trapped at a position = min(leftMax, rightMax) - height[i]
  - Move the pointer with the smaller max inward

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to calculate trapped water
int trap(int *height, int heightSize) {
    if (heightSize <= 2) {
        return 0;
    }

    int left = 0;
    int right = heightSize - 1;
    int leftMax = 0;
    int rightMax = 0;
    int totalWater = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            // Process left side
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                totalWater += leftMax - height[left];
            }
            left++;
        } else {
            // Process right side
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                totalWater += rightMax - height[right];
            }
            right--;
        }
    }

    return totalWater;
}

int main() {
    // Test case 1
    int height1[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int size1 = 12;
    printf("Test 1: height = [0,1,0,2,1,0,1,3,2,1,2,1]\n");
    printf("Trapped water: %d\n\n", trap(height1, size1));

    // Test case 2
    int height2[] = {4, 2, 0, 3, 2, 5};
    int size2 = 6;
    printf("Test 2: height = [4,2,0,3,2,5]\n");
    printf("Trapped water: %d\n\n", trap(height2, size2));

    // Test case 3 - no water can be trapped
    int height3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    printf("Test 3: height = [1,2,3,4,5] (increasing)\n");
    printf("Trapped water: %d\n\n", trap(height3, size3));

    // Test case 4 - single bar
    int height4[] = {5};
    int size4 = 1;
    printf("Test 4: height = [5] (single bar)\n");
    printf("Trapped water: %d\n", trap(height4, size4));

    return 0;
}

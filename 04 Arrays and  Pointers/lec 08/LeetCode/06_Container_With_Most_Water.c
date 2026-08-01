/*
============================================================
  LEETCODE 11: CONTAINER WITH MOST WATER (Medium)
============================================================
You are given an integer array height of length n. There are
n vertical lines drawn such that the two endpoints of the ith
line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container,
such that the container contains the most water.

Return the maximum amount of water a container can store.

Example:
  Input: height = [1,8,6,2,5,4,8,3,7]
  Output: 49
  Explanation: The above vertical lines are represented by array
  [1,8,6,2,5,4,8,3,7]. The max area is between lines 1 and 7
  (indices 1 and 6): min(8,7) * 7 = 49

Approach: Two-pointer technique
  - Start with left = 0 and right = n-1 (widest container)
  - Area = min(height[left], height[right]) * (right - left)
  - Move the pointer with the smaller height inward
    (because the smaller height limits the area)

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>

// Function to find the maximum area
int maxArea(int *height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxWater = 0;

    while (left < right) {
        // Calculate current area
        int width = right - left;
        int currentHeight = (height[left] < height[right]) ? height[left] : height[right];
        int currentArea = currentHeight * width;

        // Update max area if current is larger
        if (currentArea > maxWater) {
            maxWater = currentArea;
        }

        // Move the pointer with the smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    // Test case 1
    int height1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size1 = 9;
    printf("Test 1: height = [1,8,6,2,5,4,8,3,7]\n");
    printf("Max area: %d\n\n", maxArea(height1, size1));

    // Test case 2
    int height2[] = {1, 1};
    int size2 = 2;
    printf("Test 2: height = [1,1]\n");
    printf("Max area: %d\n\n", maxArea(height2, size2));

    // Test case 3 - increasing heights
    int height3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    printf("Test 3: height = [1,2,3,4,5]\n");
    printf("Max area: %d\n\n", maxArea(height3, size3));

    // Test case 4 - decreasing heights
    int height4[] = {5, 4, 3, 2, 1};
    int size4 = 5;
    printf("Test 4: height = [5,4,3,2,1]\n");
    printf("Max area: %d\n", maxArea(height4, size4));

    return 0;
}

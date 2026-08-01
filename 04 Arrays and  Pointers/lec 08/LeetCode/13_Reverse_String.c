/*
============================================================
  LEETCODE 344: REVERSE STRING (Easy)
============================================================
Write a function that reverses a string. The input string is
given as an array of characters s.

You must do this by modifying the input array in-place with
O(1) extra memory.

Example:
  Input: s = ["h","e","l","l","o"]
  Output: ["o","l","l","e","h"]

Approach: Two-pointer technique
  - Use left pointer (start) and right pointer (end)
  - Swap characters at left and right
  - Move pointers inward until they meet

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void reverseString(char *s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        // Swap characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

// Helper function to print character array
void printCharArray(char *s, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("\"%c\"", s[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

int main() {
    // Test case 1
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;
    printf("Test 1: s = ");
    printCharArray(s1, size1);
    reverseString(s1, size1);
    printf(" -> ");
    printCharArray(s1, size1);
    printf("\n\n");

    // Test case 2
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int size2 = 6;
    printf("Test 2: s = ");
    printCharArray(s2, size2);
    reverseString(s2, size2);
    printf(" -> ");
    printCharArray(s2, size2);
    printf("\n\n");

    // Test case 3 - single character
    char s3[] = {'A'};
    int size3 = 1;
    printf("Test 3: s = ");
    printCharArray(s3, size3);
    reverseString(s3, size3);
    printf(" -> ");
    printCharArray(s3, size3);
    printf("\n");

    return 0;
}

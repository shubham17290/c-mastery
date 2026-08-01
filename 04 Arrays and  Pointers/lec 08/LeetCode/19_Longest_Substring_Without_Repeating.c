/*
============================================================
  LEETCODE 3: LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS (Medium)
============================================================
Given a string s, find the length of the longest substring
without repeating characters.

Example:
  Input: s = "abcabcbb"
  Output: 3
  Explanation: The answer is "abc", with the length of 3.

Approach: Sliding Window with two pointers
  - Use left pointer to mark the start of the window
  - Use right pointer to expand the window
  - Use an array to track the last seen position of each character
  - When a character repeats, move left to after its last occurrence

Time Complexity: O(n)
Space Complexity: O(1) (fixed-size character array)
============================================================
*/

#include <stdio.h>
#include <string.h>

// Function to find length of longest substring without repeating characters
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }

    // Array to store last seen position of each character (ASCII 256)
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {
        char c = s[right];

        // If character was seen before and is within current window
        if (lastSeen[c] >= left) {
            // Move left to after the last occurrence
            left = lastSeen[c] + 1;
        }

        // Update last seen position
        lastSeen[c] = right;

        // Update max length
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    // Test case 1
    char s1[] = "abcabcbb";
    printf("Test 1: \"%s\"\n", s1);
    printf("Longest substring length: %d\n\n", lengthOfLongestSubstring(s1));

    // Test case 2
    char s2[] = "bbbbb";
    printf("Test 2: \"%s\"\n", s2);
    printf("Longest substring length: %d\n\n", lengthOfLongestSubstring(s2));

    // Test case 3
    char s3[] = "pwwkew";
    printf("Test 3: \"%s\"\n", s3);
    printf("Longest substring length: %d\n\n", lengthOfLongestSubstring(s3));

    // Test case 4 - empty string
    char s4[] = "";
    printf("Test 4: \"\" (empty string)\n");
    printf("Longest substring length: %d\n", lengthOfLongestSubstring(s4));

    return 0;
}

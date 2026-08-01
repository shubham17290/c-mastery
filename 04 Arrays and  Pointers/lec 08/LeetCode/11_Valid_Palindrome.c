/*
============================================================
  LEETCODE 125: VALID PALINDROME (Easy)
============================================================
A phrase is a palindrome if, after converting all uppercase
letters into lowercase letters and removing all non-alphanumeric
characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example:
  Input: s = "A man, a plan, a canal: Panama"
  Output: true
  Explanation: "amanaplanacanalpanama" is a palindrome.

Approach: Two-pointer technique
  - Use left pointer (start) and right pointer (end)
  - Skip non-alphanumeric characters
  - Compare characters (case-insensitive)
  - Move pointers inward

Time Complexity: O(n)
Space Complexity: O(1)
============================================================
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to check if a string is a valid palindrome
bool isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Skip non-alphanumeric characters from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    // Test case 1
    char s1[] = "A man, a plan, a canal: Panama";
    printf("Test 1: \"%s\"\n", s1);
    printf("Is palindrome: %s\n\n", isPalindrome(s1) ? "true" : "false");

    // Test case 2
    char s2[] = "race a car";
    printf("Test 2: \"%s\"\n", s2);
    printf("Is palindrome: %s\n\n", isPalindrome(s2) ? "true" : "false");

    // Test case 3 - empty string
    char s3[] = " ";
    printf("Test 3: \" \" (empty/space)\n");
    printf("Is palindrome: %s\n\n", isPalindrome(s3) ? "true" : "false");

    // Test case 4 - numbers only
    char s4[] = "0P";
    printf("Test 4: \"%s\"\n", s4);
    printf("Is palindrome: %s\n", isPalindrome(s4) ? "true" : "false");

    return 0;
}

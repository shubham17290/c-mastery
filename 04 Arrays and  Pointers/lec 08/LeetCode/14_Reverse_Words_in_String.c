/*
============================================================
  LEETCODE 151: REVERSE WORDS IN A STRING (Medium)
============================================================
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters.
The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated
by a single space.

Note that s may contain leading or trailing spaces or multiple
spaces between two words. The returned string should only have
a single space separating the words.

Example:
  Input: s = "the sky is blue"
  Output: "blue is sky the"

Approach: Two-pointer / Word extraction
  - Traverse the string from the end
  - Extract each word and build the result
  - Skip extra spaces

Time Complexity: O(n)
Space Complexity: O(n) for result
============================================================
*/

#include <stdio.h>
#include <string.h>

// Function to reverse words in a string
void reverseWords(char *s, char *result) {
    int len = strlen(s);
    int i = len - 1;
    int resultIndex = 0;

    while (i >= 0) {
        // Skip spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        if (i < 0) {
            break;
        }

        // Find the end of the current word
        int end = i;

        // Find the start of the current word
        while (i >= 0 && s[i] != ' ') {
            i--;
        }
        int start = i + 1;

        // Copy the word to result
        for (int j = start; j <= end; j++) {
            result[resultIndex++] = s[j];
        }

        // Add a space if there are more words
        if (i >= 0) {
            result[resultIndex++] = ' ';
        }
    }

    // Null terminate the result
    result[resultIndex] = '\0';
}

int main() {
    // Test case 1
    char s1[] = "the sky is blue";
    char result1[100];
    reverseWords(s1, result1);
    printf("Test 1: \"%s\"\n", s1);
    printf("Reversed: \"%s\"\n\n", result1);

    // Test case 2 - multiple spaces
    char s2[] = "  hello world  ";
    char result2[100];
    reverseWords(s2, result2);
    printf("Test 2: \"%s\" (with extra spaces)\n", s2);
    printf("Reversed: \"%s\"\n\n", result2);

    // Test case 3 - single word
    char s3[] = "hello";
    char result3[100];
    reverseWords(s3, result3);
    printf("Test 3: \"%s\"\n", s3);
    printf("Reversed: \"%s\"\n\n", result3);

    // Test case 4
    char s4[] = "a good   example";
    char result4[100];
    reverseWords(s4, result4);
    printf("Test 4: \"%s\"\n", s4);
    printf("Reversed: \"%s\"\n", result4);

    return 0;
}

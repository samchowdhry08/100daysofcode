/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    int i, lenS = 0, lenT = 0, flag = 0;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // Find lengths manually
    while (s[lenS] != '\0') lenS++;
    while (t[lenT] != '\0') lenT++;

    // Different lengths can never be anagrams
    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    // One array: add for s, subtract for t
    for (i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // If every slot is back to 0, frequencies match
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
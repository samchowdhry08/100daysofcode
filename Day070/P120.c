/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int newWord = 1;   // 1 means the next letter starts a new word

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord == 1) {
                // first letter of the word: make it uppercase
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
                newWord = 0;
            } else {
                // rest of the word: make it lowercase
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32;
                }
            }
        }
        i++;
    }

    // Remove the newline left by fgets
    if (str[i] == '\n') {
        str[i] = '\0';
    }

    printf("%s\n", str);

    return 0;
}
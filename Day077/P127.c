/*
Q127: Write a program that reads text from input.txt,
Converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: could not open input.txt\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted successfully. Check output.txt\n");

    return 0;
}
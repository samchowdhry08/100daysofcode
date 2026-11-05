/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    //write records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create students.txt\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    //read records back from file and display
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }

    printf("\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
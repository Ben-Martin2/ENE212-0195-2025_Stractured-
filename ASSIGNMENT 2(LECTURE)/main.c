
#include <stdio.h>

int main(void)
{
    int studentCount;

    printf("How many students? ");
    if (scanf("%d", &studentCount) != 1 || studentCount <= 0) {
        printf("Please enter a positive whole number.\n");
        return 1;
    }

    for (int i = 0; i < studentCount; i++) {
        int registrationNumber;
        int marks;
        char name[100];
        char grade;

        printf("\nStudent %d of %d\n", i + 1, studentCount);

        printf("Registration number: ");
        if (scanf("%d", &registrationNumber) != 1) {
            printf("Invalid registration number.\n");
            return 1;
        }

        printf("Name: ");
        if (scanf(" %99[^\n]", name) != 1) {
            printf("Invalid name.\n");
            return 1;
        }

        printf("Marks (0-100): ");
        if (scanf("%d", &marks) != 1 || marks < 0 || marks > 100) {
            printf("Please enter a whole number of marks from 0 to 100.\n");
            return 1;
        }

        if (marks >= 70) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("\n----------------------------------------\n");
        printf("          STUDENT INFORMATION\n");
        printf("----------------------------------------\n");
        printf("Registration No: %d\n", registrationNumber);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }

        printf("----------------------------------------\n");
    }

    return 0;
}

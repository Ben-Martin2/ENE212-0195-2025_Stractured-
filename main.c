/*
START

enter grade
grade assessed
IF grade lies from A TO E remarks follow
ENDIF
ELSE invalid input
ENDELSE

END

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("--STUDENT GRADING SYSTEM--\n");

    printf("Enter your grade: \n");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Remarks: Excellent!\n");
            break;
        case 'B':
            printf("Remarks: Good job!\n");
            break;
        case 'C':
            printf("Remarks: Fair.\n");
            break;
        case 'D':
            printf("Remarks: Pass.\n");
            break;
        case 'E':
            printf("Remarks: Fail.\n");
            break;
        default:
            printf("invalid!");
    }
    return 0;
}

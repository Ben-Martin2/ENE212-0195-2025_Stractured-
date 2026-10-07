/*START

SET correctPIN = 9090
SET attempts = 0

WHILE attempts < 3

    DISPLAY "Enter PIN: "
    INPUT enteredPIN

    IF enteredPIN == correctPIN THEN
        DISPLAY "Access Granted. Door Unlocked!"
        display menu
        choose from menu
        STOP
    ELSE
        attempts = attempts + 1
        DISPLAY "Incorrect PIN"
        DISPLAY "Attempts remaining: ", (3 - attempts)
    ENDIF
    IF enteredPIN < 9999
        display "pin too short"
    ELSEIF enteredPIN > 1000
        display "pin too long"
    ELSE
        display "PIN is exactly 4 digits"
    ENDIF

ENDWHILE

DISPLAY "Access Denied. Maximum attempts exceeded."
lock system for 5 seconds
initiate lock down period using for statements
end lock down

END*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int correctPIN = 9090;
    int userPIN;
    int attempts = 0;
    int choice;
    int i;


    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &userPIN);

        if (userPIN == correctPIN) {
            printf("Access Granted. Door Unlocked!\n");
            printf("\n===== MENU =====\n");
            printf("1. Open Door\n");
            printf("2. Change Username\n");
            printf("3. Change PIN\n");
            printf("4. Exit\n");
            printf("Enter your choice: \n");
         scanf("%d", &choice);

       switch (choice) {
            case 1:
              printf("Door Open.\n");
              break;
            case 2:
              printf("Change username feature coming soon.\n");
              break;
            case 3:
              printf("Change PIN feature coming soon.\n");
              break;
            case 4:
              printf("Exiting system.\n");
              break;
            default:
              printf("Invalid Choice!Please try again\n");
            }
            return 0;  // End program
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n", 3 - attempts);
        }
            if (userPIN > 9999) {
            printf("PIN is too long.\n");
        }
         else if (userPIN < 1000) {
         printf("PIN is too short.\n");
        }
        else {
        printf("PIN is exactly 4 digits.\n");
        }

    }

    printf("Access Denied. Maximum attempts exceeded.\n");

    printf("\nSYSTEM LOCKED!Wait for 5 seconds\n");


    for (i = 5; i >= 1; i--) {

    printf("%d\n", i);
    }



printf("Lockout period ended.\n");


    return 0;
}

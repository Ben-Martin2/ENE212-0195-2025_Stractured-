#include <string.h>
#include <stdio.h>

#define MAX_ATTEMPTS 3
#define STORED_PIN "1234"

int login(void) {
    char enteredPin[20];

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) {
        printf("Enter your PIN: ");
        scanf("%19s", enteredPin);

        if (strcmp(enteredPin, STORED_PIN) == 0) {
            printf("Login successful!\n");
            return 1;
        }

        if (attempt < MAX_ATTEMPTS) {
            printf("Incorrect PIN. %d attempt(s) remaining.\n",
                   MAX_ATTEMPTS - attempt);
        }
    }

    printf("Maximum attempts exceeded. Access denied.\n");
    return 0;
}

void checkBalance(double balance) {
    printf("Your current balance is $%.2f\n", balance);
}

double readPositiveAmount(const char *prompt) {
    double amount;

    while (1) {
        printf("%s", prompt);

        if (scanf("%lf", &amount) != 1) {
            printf("Please enter a valid number.\n");

            // Clear invalid input from the input buffer.
            int character;
            while ((character = getchar()) != '\n' && character != EOF) {
                /* discard input */
            }
            continue;
        }

        if (amount <= 0) {
            printf("Amount must be greater than zero.\n");
            continue;
        }

        return amount;
    }
}

double deposit(double balance) {
    double amount = readPositiveAmount("Enter deposit amount: $");
    balance += amount;
    printf("Deposit successful. New balance: $%.2f\n", balance);
    return balance;
}

double withdraw(double balance) {
    double amount;

    while (1) {
        amount = readPositiveAmount("Enter withdrawal amount: $");

        if (amount <= balance) {
            balance -= amount;
            printf("Withdrawal successful. New balance: $%.2f\n", balance);
            return balance;
        }

        printf("Insufficient funds. Your balance is $%.2f\n", balance);
    }
}

int main(void) {
    double balance = 1000.00;
    int choice;

    printf("Welcome to the ATM\n");

    if (!login()) {
        return 0;
    }

    while (1) {
        printf("\nATM Menu\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option (1-4): ");

        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number from 1 to 4.\n");

            int character;
            while ((character = getchar()) != '\n' && character != EOF) {
                /* discard input */
            }
            continue;
        }

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please choose 1, 2, 3, or 4.\n");
        }
    }
}

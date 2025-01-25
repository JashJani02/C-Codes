#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold account information
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

// Function prototypes
void createAccount(struct Account *accounts, int *count);
void depositMoney(struct Account *accounts, int count);
void withdrawMoney(struct Account *accounts, int count);
void checkBalance(struct Account *accounts, int count);
void displayAccounts(struct Account *accounts, int count);

int main() {
    struct Account accounts[100]; // Array to hold up to 100 accounts
    int count = 0; // Number of accounts created
    int choice;

    while (1) {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                depositMoney(accounts, count);
                break;
            case 3:
                withdrawMoney(accounts, count);
                break;
            case 4:
                checkBalance(accounts, count);
                break;
            case 5:
                displayAccounts(accounts, count);
                break;
            case 6:
                printf("Exiting the system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to create a new account
void createAccount(struct Account *accounts, int *count) {
    if (*count >= 100) {
        printf("Cannot create more accounts. Limit reached.\n");
        return;
    }

    struct Account newAccount;
    newAccount.accountNumber = *count + 1;

    printf("Enter account holder's name: ");
    scanf("%s", newAccount.name);

    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);

    accounts[*count] = newAccount;
    (*count)++;

    printf("Account created successfully. Account Number: %d\n", newAccount.accountNumber);
}

// Function to deposit money into an account
void depositMoney(struct Account *accounts, int count) {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

// Function to withdraw money from an account
void withdrawMoney(struct Account *accounts, int count) {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > accounts[i].balance) {
                printf("Insufficient balance.\n");
            } else {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            }
            return;
        }
    }

    printf("Account not found.\n");
}

// Function to check the balance of an account
void checkBalance(struct Account *accounts, int count) {
    int accountNumber;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Current Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

// Function to display all accounts
void displayAccounts(struct Account *accounts, int count) {
    if (count == 0) {
        printf("No accounts found.\n");
        return;
    }

    printf("\nAll Accounts:\n");
    for (int i = 0; i < count; i++) {
        printf("Account Number: %d\n", accounts[i].accountNumber);
        printf("Account Holder: %s\n", accounts[i].name);
        printf("Balance: %.2f\n", accounts[i].balance);
        printf("-------------------------\n");
    }
}
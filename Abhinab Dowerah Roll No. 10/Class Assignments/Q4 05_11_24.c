#include <stdio.h>
#include <string.h>

struct BankAccount {
    char act_holder[50];
    int act_numb;
    float balance;
    char act_type;
    union {
        float interest_rate;
        float overdraft_limit;
    } details;
};

int main() {
    struct BankAccount account;

    printf("Enter account holder name: ");
    scanf("%s", account.act_holder);
    printf("Enter account number: ");
    scanf("%d", &account.act_numb);
    printf("Enter balance: ");
    scanf("%f", &account.balance);
    printf("Enter account type (S for Savings, C for Current): ");
    scanf(" %c", &account.act_type);

    if (account.act_type == 'S' || account.act_type == 's') {
        printf("Enter interest rate for savings account: ");
        scanf("%f", &account.details.interest_rate);
    } else if (account.act_type == 'C' || account.act_type == 'c') {
        printf("Enter overdraft limit for current account: ");
        scanf("%f", &account.details.overdraft_limit);
    } else {
        printf("Invalid account type.\n");
        return 1;
    }

    printf("\nAccount Details:\n");
    printf("Account Holder: %s\n", account.act_holder);
    printf("Account Number: %d\n", account.act_numb);
    printf("Balance: %.2f\n", account.balance);
    if (account.act_type == 'S' || account.act_type == 's') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.details.interest_rate);
    } else if (account.act_type == 'C' || account.act_type == 'c') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.details.overdraft_limit);
    }

    return 0;
}

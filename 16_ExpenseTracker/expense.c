#include <stdio.h>

struct Expense {
    char name[30];
    float amount;
};

int main() {
    struct Expense e[10];
    int n, i;
    float total = 0;

    printf("Enter number of expenses: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter expense name: ");
        scanf("%s", e[i].name);

        printf("Enter amount: ");
        scanf("%f", &e[i].amount);

        total += e[i].amount;
    }

    printf("\n--- Expenses ---\n");

    for(i = 0; i < n; i++)
        printf("%s : %.2f\n", e[i].name, e[i].amount);

    printf("Total Expense = %.2f\n", total);

    return 0;
}

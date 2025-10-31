//created by sakshi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Expense {
    char category[50];
    float amount;
    struct Expense *next;
};

// this is where we can add expense (use of linked list)
void addExpense(struct Expense **head, char category[], float amount) {
    struct Expense *newExpense = (struct Expense*)malloc(sizeof(struct Expense));
    if (newExpense == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    strcpy(newExpense->category, category);
    newExpense->amount = amount;
    newExpense->next = *head;
    *head = newExpense;
    printf("Expense added successfully!\n");
}

// this is for  displaying all expenses in the linked list
void displayExpenses(struct Expense *head) {
    if (head == NULL) {
        printf("No expenses recorded yet.\n");
        return;
    }
    printf("Expenses:\n");
    while (head != NULL) {
        printf("Category: %s, Amount: %.2f\n", head->category, head->amount);
        head = head->next;
    }
}

int main() {
    struct Expense *head = NULL;
    int choice;
    char category[50];
    float amount;

    do {
        printf("\n1. Add an expense\n");
        printf("2. Display all expenses\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter expense category: ");
                scanf("%s", category);
                printf("Enter expense amount: ");
                scanf("%f", &amount);
                addExpense(&head, category, amount);
                break;
            case 2:
                displayExpenses(head);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    while (head != NULL) {
        struct Expense *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
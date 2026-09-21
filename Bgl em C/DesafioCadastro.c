#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact(void) {
    struct Contact *contactPtr = malloc(sizeof(struct Contact));

    if (contactPtr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    } else {
        contactPtr->name[0] = '\0';
        contactPtr->phone[0] = '\0';
        contactPtr->email[0] = '\0';
        contactPtr->age = 0;
    }

    return contactPtr;
}

void populateContact(struct Contact *contactPtr) {
    int c;

    printf("Enter name: ");
    fgets(contactPtr->name, sizeof(contactPtr->name), stdin);
    contactPtr->name[strcspn(contactPtr->name, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(contactPtr->phone, sizeof(contactPtr->phone), stdin);
    contactPtr->phone[strcspn(contactPtr->phone, "\n")] = '\0';

    printf("Enter email: ");
    fgets(contactPtr->email, sizeof(contactPtr->email), stdin);
    contactPtr->email[strcspn(contactPtr->email, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &contactPtr->age);
    while ((c = getchar()) != '\n' && c != EOF); // limpa o \n deixado pelo scanf
}

void displayContact(const struct Contact *contactPtr) {
    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d\n", contactPtr->age);
}

void updateContact(struct Contact *ptr) {
    int op;
    int c;

    printf("What would you like to update?\n");
    printf("1. Name\n");
    printf("2. Phone\n");
    printf("3. Email\n");
    printf("4. Age\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &op);
    while ((c = getchar()) != '\n' && c != EOF); // limpa o \n antes de qualquer fgets

    switch (op) {
        case 1:
            printf("Enter new name: ");
            fgets(ptr->name, sizeof(ptr->name), stdin);
            ptr->name[strcspn(ptr->name, "\n")] = '\0';
            printf("Contact updated successfully\n");
            break;

        case 2:
            printf("Enter new phone: ");
            fgets(ptr->phone, sizeof(ptr->phone), stdin);
            ptr->phone[strcspn(ptr->phone, "\n")] = '\0';
            printf("Contact updated successfully\n");
            break;

        case 3:
            printf("Enter new email: ");
            fgets(ptr->email, sizeof(ptr->email), stdin);
            ptr->email[strcspn(ptr->email, "\n")] = '\0';
            printf("Contact updated successfully\n");
            break;

        case 4:
            printf("Enter new age: ");
            scanf("%d", &ptr->age);
            printf("Contact updated successfully\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    struct Contact *newContact = createContact();

    if (newContact == NULL) {
        printf("Failed to create contact\n");
        return -1;
    }

    populateContact(newContact);

    printf("--- Initial Contact ---\n");
    displayContact(newContact);

    printf("--- Updating Contact ---\n");
    updateContact(newContact);

    printf("--- Updated Contact ---\n");
    displayContact(newContact);

    free(newContact);
    printf("Contact management completed\n");

    return 0;
}
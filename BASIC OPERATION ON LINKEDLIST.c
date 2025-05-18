#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head, *temp, *newnode;

void insertAtFirst() {
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    printf("Inserted at first.\n");
}

void insertAtLast() {
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the value to insert at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    printf("Inserted at last.\n");
}

void deleteAtFirst() {
    if (head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    printf("Deleted first node.\n");
}

void deleteAtLast() {
    if (head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node *prev = NULL;
        temp = head;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    printf("Deleted last node.\n");
}

void display() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    temp = head;
    printf("Linked List:\n");
    while (temp != NULL) {
        printf("Data: %d, Next Address: %p\n", temp->data, temp->next);
        temp = temp->next;
    }
}

void countNodes() {
    int count = 0;
    temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total number of nodes: %d\n", count);
}

void searchData() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    int key, pos = 1, found = 0;
    printf("Enter the data to search: ");
    scanf("%d", &key);

    temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Data %d found at position %d.\n", key, pos);
            found = 1;
            break;
        }
        temp = temp->next;
        pos++;
    }
    if (!found) {
        printf("Data %d not found in the list.\n", key);
    }
}
int main() {
    head = NULL;
    struct node *one, *two, *three;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    if (one == NULL || two == NULL || three == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    one->data = 10;
    two->data = 20;
    three->data = 30;

    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    display();

    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Delete at First\n");
        printf("4. Delete at Last\n");
        printf("5. Count Nodes\n");
        printf("6. Search Data\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtFirst();
                break;
            case 2:
                insertAtLast();
                break;
            case 3:
                deleteAtFirst();
                break;
            case 4:
                deleteAtLast();
                break;
            case 5:
                countNodes();
                break;
            case 6:
                searchData();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
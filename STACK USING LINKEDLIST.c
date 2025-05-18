#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf(" overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed: %d\n", value);
}
int pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node* temp = top;
    int popped = temp->data;
    top = top->next;
    free(temp);
    printf("Popped: %d\n", popped);
    return popped;
}
void display() {
    struct Node* current = top;
    printf("Stack (top to bottom): ");
    while (current != NULL) {
        printf("%d -> \n", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main() {
    while(1){
    int choice,value;
    printf("\nENTER THE OPTRETIONS YOU WANT TO PERFORM\n");
    printf("\n1.)push\n");
    printf("\n2.)pop\n");
    printf("\n3.)display\n");
    printf("\n4.)Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("enter the value you want to enter");
                scanf("%d",&value);
                push(value);
                break;
        case 2: pop();
                break;
        case 3: display();
               break;
        case 4: printf("EXITED program !!!! ");
               break;
    }
    }
    return 0;
}
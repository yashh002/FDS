#include <stdio.h>
#define MAX 100 

int stack[MAX];
int top = -1;   

int main() {
    int choice, value;

    while(1){ 
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) { 
            if (top == MAX - 1) {
                printf("Stack Overflow! Cannot push more elements.\n");
            } else {
                printf("Enter the value to push: ");
                scanf("%d", &value);
                top++;
                stack[top] = value;
                printf("%d pushed onto the stack.\n", value);
            }
        } else if (choice == 2) { 
            if (top == -1) {
                printf("Stack Underflow! Cannot pop elements from an empty stack.\n");
            } else {
                printf("%d popped from the stack.\n", stack[top]);
                top--;
            }
        } else if (choice == 3) { 
            if (top == -1) {
                printf("The stack is empty.\n");
            } else {
                printf("The stack elements are:\n");
                for (int i = top; i >= 0; i--){
                    printf("stack[%d] = %d\n",i,stack[i]);
                }
                printf("\n");
            }
        } else if (choice == 4){ 
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
        }
    }
    return 0;
}
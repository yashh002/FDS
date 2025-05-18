#include <stdio.h>

int main() {
    int n, front = -1, rear = -1;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];

    while (1) {
        int choice, value;
        printf("\n1.) Entering the data\n");
        printf("2.) Deleting the data\n");
        printf("3.) Display the data\n");
        printf("4.) Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {  
            if ((rear + 1) % n == front) {
                printf("Queue overflow\n");
            } else {
                printf("Enter value to insert: ");
                scanf("%d", &value);
                if (rear == -1 && front == -1) {
                    rear = front = 0;
                } else {
                    rear = (rear + 1) % n;
                }
                arr[rear] = value;
                printf("The value inserted is %d\n", value);
            }
        } else if (choice == 2){ 
            if (front == -1) {
                printf("Queue underflow\n");
            } else {
                printf("The value deleted from the queue is %d\n", arr[front]);
                if (front == rear){  
                    front = rear = -1;
                }else{
                    front = (front + 1) % n;
                }
            }
        } else if (choice == 3) {  
            if (front == -1) {
                printf("Queue is empty\n");
            } else {
                printf("The stored data is:\n");
                int i = front;
                while (1) {
                    printf("queue[%d] = %d\n", i, arr[i]);
                    if (i == rear) break;
                    i = (i + 1) % n;
                }
            }
        } else if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
        }
    }

    return 0;
}
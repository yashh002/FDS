#include <stdio.h>
#define MAX 100
int main()
{ int arr[MAX],front=-1,rear=-1;
   while(1){
       int choice , value;
       printf("\n1.) Entering the data\n");
       printf("2.) Deleting the data\n");
       printf("3.) Display the data\n");
       printf("4.) Exit\n");
       scanf("%d",&choice);
       if(choice==1){
           if(rear==MAX-1){
               printf("queue overflow");
           }else{
           printf("ENTER THE VALUE TO INSERT");
           scanf("%d",&value);
           ++rear;
           arr[rear]=value;
           printf("THE VALUE INSERTED IS %d ", value);
           }
        }
       else if(choice==2){
        if(rear==-1){
            printf("queue underflow");
        }else{
            ++front;
            printf("The value deleted from queue is %d",arr[front]);
        }
       }
        else if(choice==3){
            printf("The stored data is");
            for(int i = front+1 ; i<=rear;i++){
                printf("queue[%d] = %d\n" , i , arr[i]);
            }
        }
        else if (choice == 4){ 
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
        }
       }
       return 0;    
   }
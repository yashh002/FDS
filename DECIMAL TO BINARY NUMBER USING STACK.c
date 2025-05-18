#include<stdio.h>
# define max 10
int stack[max];
int top = -1;
void push(int value){
     if(top<max-1){
       stack[++top]=value;
       }
       }
void print_binary(){
    while(top>=0){
       printf("%d",stack[top--]);
       }
       }
void decimal_to_binary(int num){
    while(num>0){
       push(num%2);
       num/=2;
       }
    printf("Binary: ");
    if(top==-1){
       printf("0");
       }
    else{
       print_binary();
       }
    printf("\n");
    }
int main()
{
   int num;
   printf("Enter decimal number:");
   scanf("%d",&num);
   decimal_to_binary(num);
   return 0;
   }
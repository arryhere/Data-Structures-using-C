// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Stack{
//     int size;
//     int top;
//     int *arr;
// };

// //traversal
// void traversalStack(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack is empty\n");
//     }
//     else{
//         for(int i=0;i<= (*s).top;i++){
//             printf("%d ",(*s).arr[i]);
//         }
//         printf("\n");
//     }
// }

// //is empty
// void isEmpty(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack is not empty\n");
//     }
// }

// //is full
// void isFull(struct Stack *s){
//     if((*s).top == (*s).size - 1){
//         printf("Stack is full\n");
//     }
//     else{
//         printf("Stack is not full\n");
//     }
// }

// //push
// void push(struct Stack *s,int value){
//     if((*s).top == (*s).size - 1){
//         printf("Stack Overflow , at value [%d]\n",value);
//     }
//     else{
//         (*s).arr[(*s).top + 1] = value;
//         (*s).top = (*s).top + 1;
//     }
// }

// //pop
// int pop(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     else{
//         int value = (*s).arr[(*s).top];
//         (*s).top = (*s).top - 1;
//         return value;
//     }
// }

// //peek
// int peek(struct Stack *s,int index){
//     if(index <= 0 || index > (*s).top+1){
//         printf("Not a valid index\n");
//         return -1;
//     }
//     else{
//         return (*s).arr[(*s).top - index + 1];
//     }
// }

// //stackTop
// int stackTop(struct Stack *s){
//     return (*s).arr[(*s).top];
// }

// //stackBottom
// int stackBottom(struct Stack *s){
//     return (*s).arr[0];
// }

// int main() {

//     //creating stack using pointer then initializing the stack in heap memory
//     struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
//     (*s).size = 50;
//     (*s).top = -1;
//     (*s).arr = (int *)malloc(((*s).size) * sizeof(int));

//     traversalStack(s);

//     //push
//     push(s,1);
//     push(s,2);
//     push(s,3);
//     push(s,4);
//     push(s,5);
//     traversalStack(s);

//     // //pop
//     // printf("%d\n",pop(s));
//     // traversalStack(s);

//     // printf("%d\n",pop(s));
//     // traversalStack(s);

//     // //isEmpty isFull
//     // isEmpty(s);
//     // isFull(s);

//     // //peek
//     // printf("%d\n",peek(s,5));

//     // //print in order of stack
//     // for(int i=1;i<=(*s).top+1;i++){
//     //     printf("%d ",peek(s,i));
//     // }

//     // printf("top - %d bottom - %d",stackTop(s),stackBottom(s));

//     return 0;
// }
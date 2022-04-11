// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void traversalStackLinkedList(struct Node *top){
//     while(top != NULL){
//         printf("%d ",(*top).data);
//         top = (*top).next;
//     }
//     printf("\n");
// }

// //isEmpty
// int isEmpty(struct Node *top){
//     if(top == NULL){
//         printf("Stack is empty\n");
//         return 1;
//     }
//     else{
//         // printf("Stack is not empty\n");
//         return 0;
//     }
// }

// //isFull
// int isFull(struct Node *top){
//     struct Node * p = (struct Node *)malloc(sizeof(struct Node));
//     if(p == NULL){
//         printf("Stack is full\n");
//         return 1;
//     }
//     else{
//         // printf("Stack is not full\n");
//         return 0;
//     }
// }

// //push
// struct Node * push(struct Node *top , int value){
//     if(isFull(top) == 1){
//         printf("Stack Overflow\n");
//     }
//     else{
//         struct Node * p = (struct Node *)malloc(sizeof(struct Node));
//         (*p).data = value;
//         (*p).next = top;
//         top = p;
//         return top;
//     }
// }

// //pop
// struct Node * pop(struct Node* top){
//     if(isEmpty(top) == 1){
//         printf("Stack underflow");
//     }
//     else{
//         struct Node *p = top;
//         top = (*top).next;
//         int value = (*p).data;
//         free(p);
//         printf("Element popped : %d\n",value);
//         return top;
//     }
// }

// //stackTop
// int stackTop(struct Node *top){
//     return (*top).data;
// }

// //stackBottom
// int stackBottom(struct Node *top){
//     while((*top).next != NULL){
//         top = (*top).next;
//     }

//     return (*top).data;
// }

// //peek
// int peek(struct Node *top,int pos){
//     if(pos<=0){
//         return -1;
//     }
//     int i=1;
//     while(i<pos && top != NULL){
//         top = (*top).next;
//         i++;
//     }
//     if(top == NULL){
//         return -1;
//     }
//     else{
//         return (*top).data;
//     }
// }


// int main() {
//     struct Node *top = NULL;

//     traversalStackLinkedList(top);  

//     top = push(top,1);
//     top = push(top,2);
//     top = push(top,3);
//     top = push(top,4);
//     top = push(top,5);
//     traversalStackLinkedList(top);

//     top = pop(top);
//     traversalStackLinkedList(top);

//     printf("top - %d\n",stackTop(top));
//     printf("bottom - %d\n",stackBottom(top));

//     printf("%d\n",peek(top,1));     //1,2,3,4,5 order of stack ; 1 is top

//     return 0;
// }
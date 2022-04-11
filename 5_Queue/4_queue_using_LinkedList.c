// //without using global variables

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void queueTraversal(struct Node *f){
//     if(f==NULL){
//         printf("Queue is empty\n");
//     }
//     else{
//         while(f != NULL){
//             printf("%d ",(*f).data);
//             f = (*f).next;
//         }
//         printf("\n");
//     }
// }

// //enqueue
// void enqueue(struct Node **f,struct Node **r,int value){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     if(n == NULL){
//         printf("Queue overflow\n");
//     }
//     else{
//         (*n).data = value;
//         (*n).next = NULL;
//         if(*f == NULL && *r == NULL){
//             *f=*r=n;
//         }
//         else{
//             (*(*r)).next = n;
//             *r = n;
//         }
//         printf("Enqueue element : %d\n",value);
//     }
// }

// //dequeue
// int dequeue(struct Node **f,struct Node **r){
//     if(*f==NULL && *r==NULL){
//         printf("Queue underflow\n");
//         return -1;
//     }
//     else{
//         struct Node *ptr = *f;
//         *f = (*(*f)).next;
//         int value = (*ptr).data;
//         free(ptr);
//         return value;
//     }
// }

// int main() {
//     struct Node *f = NULL;
//     struct Node *r = NULL;
    
//     queueTraversal(f);

//     enqueue(&f,&r,5);
//     enqueue(&f,&r,6);
//     enqueue(&f,&r,7);
//     enqueue(&f,&r,8);
//     enqueue(&f,&r,9);
//     queueTraversal(f);

//     printf("Dequeue element : %d\n",dequeue(&f,&r));
//     queueTraversal(f);

//     return 0;
// }
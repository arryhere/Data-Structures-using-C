// //using global variables

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node *f = NULL;
// struct Node *r = NULL;

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void queueTraversal(){
//     struct Node *ptr = f;
//     if(ptr==NULL){
//         printf("Queue is empty\n");
//     }
//     else{
//         while(ptr != NULL){
//             printf("%d ",(*ptr).data);
//             ptr = (*ptr).next;
//         }
//         printf("\n");
//     }
// }

// //enqueue
// void enqueue(int value){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     if(n == NULL){
//         printf("Queue overflow\n");
//     }
//     else{
//         (*n).data = value;
//         (*n).next = NULL;
//         if(f == NULL && r == NULL){
//             f=r=n;
//         }
//         else{
//             (*r).next = n;
//             r = n;
//         }
//         printf("Enqueue element : %d\n",value);
//     }
// }

// //dequeue
// int dequeue(){
//     if(f==NULL && r==NULL){
//         printf("Queue underflow\n");
//         return -1;
//     }
//     else{
//         struct Node *ptr = f;
//         f = (*f).next;
//         int value = (*ptr).data;
//         free(ptr);
//         return value;
//     }
// }

// int main() {
//     queueTraversal();

//     enqueue(55);
//     enqueue(66);
//     enqueue(77);
//     enqueue(88);
//     enqueue(99);
//     queueTraversal();

//     printf("Dequeue element : %d\n",dequeue());
//     queueTraversal();

//     return 0;
// }
// //cannot add new elements after queue becomes full and then we dequeue. For that see 0_queue_using_array_onlyR

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Queue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// };

// //queueTraversal
// void queueTraversal(struct Queue *q){
//     if((*q).f == (*q).r){
//         printf("Cannot Traverse\n");
//     }
//     else{
//         for(int i=(*q).f+1 ; i<=(*q).r ; i++){
//             printf("%d ",(*q).arr[i]);
//         }
//         printf("\n");
//     }
// }

// //isFull
// int isFull(struct Queue *q){
//     if((*q).r == (*q).size -1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// //isEmpty
// int isEmpty(struct Queue *q){
//     if((*q).f == (*q).r){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// //enqueue
// void enqueue(struct Queue *q,int value){
//     if(isFull(q)){
//         printf("Queue overflow for element : %d\n",value);
//     }
//     else{
//         (*q).r++;
//         (*q).arr[(*q).r] = value;
//     }
// }

// //dequeue
// int dequeue(struct Queue *q){
//     if(isEmpty(q)){
//         printf("Queue underflow\n");
//         return -1;
//     }
//     else{
//         (*q).f++;
//         return (*q).arr[(*q).f];
//     }
// }

// int main() {
//     struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
//     (*q).size = 100;
//     (*q).f = -1;
//     (*q).r = -1;
//     (*q).arr = (int *)malloc((*q).size * sizeof(int));

//     //queueTraversal
//     queueTraversal(q);

//     //isEmpty
//     if(isEmpty(q)){
//         printf("Queue is empty\n");
//     }
//     else{
//         printf("Queue is not empty\n");
//     }

//     //enqueue
//     enqueue(q,55);
//     enqueue(q,66);
//     enqueue(q,77);
//     enqueue(q,88);
//     enqueue(q,99);
//     //queueTraversal
//     queueTraversal(q);

//     //isEmpty
//     if(isEmpty(q)){
//         printf("Queue is empty\n");
//     }
//     else{
//         printf("Queue is not empty\n");
//     }

//     //dequeue
//     printf("%d \n",dequeue(q));
//     //queueTraversal
//     queueTraversal(q);

//     return 0;
// }
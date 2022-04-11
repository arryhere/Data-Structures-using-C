// //time complexity for dequeue is O(n), use this only for educational purposes //else use circular queue

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Queue{
//     int size;
//     int r;
//     int *arr;
// };

// //queueTraversal
// void queueTraversal(struct Queue *q){
//     if((*q).r == -1){
//         printf("Queue empty, cannot traverse\n");
//     }
//     else{
//         for(int i=0;i<=(*q).r;i++){
//             printf("%d ",(*q).arr[i]);
//         }
//         printf("\n");
//     }
// }

// //isEmpty
// int isEmpty(struct Queue *q){
//     if((*q).r == -1){
//         return 1;
//     }
//     else{
//         return 0;
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

// //enqueue
// void enqueue(struct Queue *q, int value){
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
//         int value = (*q).arr[0];
//         for(int i=0;i<(*q).r;i++){
//             (*q).arr[i] = (*q).arr[i+1];
//         }
//         (*q).r--;
//         return value;
//     }
// }

// int main() {
//     struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
//     (*q).size = 5;
//     (*q).r = -1;
//     (*q).arr = (int *)malloc((*q).size * sizeof(int));

//     queueTraversal(q);

//     enqueue(q,5);
//     enqueue(q,6);
//     enqueue(q,7);
//     enqueue(q,8);
//     enqueue(q,9);
//     queueTraversal(q);

//     printf("%d\n",dequeue(q));
//     queueTraversal(q);

//     enqueue(q,10);
//     queueTraversal(q);
    
//     enqueue(q,11);
//     queueTraversal(q);

//     return 0;
// }
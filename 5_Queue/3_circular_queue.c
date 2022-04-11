// #include<stdio.h>
// #include<stdlib.h>
 
// struct circularQueue
// {
//     int size;
//     int f;
//     int r;
//     int* arr;
// };

// //queueTraversal
// void queueTraversal(struct circularQueue *q){
//     if((*q).f == (*q).r){
//         printf("Queue is empty\n");
//     }
//     else if((*q).f < (*q).r){
//         for(int i=(*q).f+1 ; i<=(*q).r ; i++){
//             printf("%d ",(*q).arr[i]);
//         }
//         printf("\n");
//     }
//     else if((*q).r < (*q).f){
//         for(int i=(*q).f+1 ; i<=(*q).size-1 ; i++){
//             printf("%d ",(*q).arr[i]);
//         }
//         for(int i=0 ; i<=(*q).r ; i++){
//             printf("%d ",(*q).arr[i]);
//         }
//         printf("\n");
//     }
// }

// //isEmpty
// int isEmpty(struct circularQueue *q){                      // (*q).r      (*q).f
//     if((*q).r == (*q).f){
//         return 1;
//     }
//     return 0;
// }

// //isFull
// int isFull(struct circularQueue *q){
//     if(((*q).r +1)%(*q).size == (*q).f){
//         return 1;
//     }
//     return 0;
// }

// //enqueue
// void enqueue(struct circularQueue *q, int value){
//     if(isFull(q)){
//         printf("Queue overflow for element : %d\n",value);
//     }
//     else{
//         (*q).r = ((*q).r +1)%(*q).size;

//         (*q).arr[(*q).r] = value;
//         printf("Element inserted : %d\n",value);
//     }
// }

// //dequeue
// int dequeue(struct circularQueue *q){
//     if(isEmpty(q)){
//         printf("Queue underflow\n");
//         return -1;
//     }
//     else{
//         (*q).f = ((*q).f +1)%(*q).size;
//         return (*q).arr[(*q).f]; 
//     }
// }
 
 
// int main(){
    
//     struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
//     (*q).size = 6;      //for size n we can have n-1 elements; [0] is for f and r initially
//     (*q).f = 0;
//     (*q).r = 0;
//     (*q).arr = (int *)malloc((*q).size * sizeof(int));
    
//     queueTraversal(q);
    
//     enqueue(q,5);
//     enqueue(q,6);
//     enqueue(q,7);
//     enqueue(q,8);
//     enqueue(q,9);
//     queueTraversal(q);

//     printf("Element removed : %d\n",dequeue(q));
//     queueTraversal(q);
    
//     enqueue(q,10);
//     enqueue(q,11);
//     queueTraversal(q);

//     printf("Element removed : %d\n",dequeue(q));
//     queueTraversal(q);

//     enqueue(q,12);
//     queueTraversal(q);

//     return 0;
// }

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct DEQueue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// };

// void DEQtraversal(struct DEQueue *deq){
//     if((*deq).f == (*deq).r){
//         printf("DEQueue is empty\n");
//     }
//     else{
//         for(int i=(*deq).f+1 ; i<=(*deq).r ; i++){
//             printf("%d ",(*deq).arr[i]);
//         }
//         printf("\n");
//     }
// }

// int isEmpty(struct DEQueue *deq){
//     if((*deq).f == (*deq).r){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isFull(struct DEQueue *deq){
//     if((*deq).f == -1 && (*deq).r == (*deq).size -1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// void enqueueF(struct DEQueue *deq,int value){
//     if((*deq).f == -1){
//         printf("Cannot enqueueF (f==-1)\n");
//     }
//     else{
//         (*deq).arr[(*deq).f] = value;
//         (*deq).f--;
//         printf("Element enqueueF : %d\n",value);
//     }
// }
// void enqueueR(struct DEQueue *deq,int value){
//     if((*deq).r == (*deq).size -1){
//         printf("Cannot enqueueR (r==size-1)\n");
//     }
//     else{
//         (*deq).r++;
//         (*deq).arr[(*deq).r] = value;
//         printf("Element enqueueR : %d\n",value);
//     }
// }
// int dequeueF(struct DEQueue *deq){
//     if(isEmpty(deq)){
//         printf("Cannot dequeueF, queue underflow\n");
//         return -1;
//     }
//     else{
//         (*deq).f++;
//         return (*deq).arr[(*deq).f];
//     }
// }
// int dequeueR(struct DEQueue *deq){
//     if(isEmpty(deq)){
//         printf("Cannot dequeueR, queue underflow\n");
//         return -1;
//     }
//     else{
//         int value = (*deq).arr[(*deq).r];
//         (*deq).r--;
//         return value;
//     }
// }



// int main() {
//     struct DEQueue *deq = (struct DEQueue *)malloc(sizeof(struct DEQueue));
//     (*deq).size = 5;
//     (*deq).f = (*deq).r = -1;
//     (*deq).arr = (int *)malloc((*deq).size * sizeof(int));

//     DEQtraversal(deq);

//     enqueueF(deq,5);
//     enqueueF(deq,6);
//     enqueueR(deq,7);
//     enqueueR(deq,8);
//     DEQtraversal(deq);

//     enqueueR(deq,9);
//     enqueueR(deq,10);
//     enqueueR(deq,11);
//     enqueueR(deq,12);
//     DEQtraversal(deq);

//     printf("%d\n",dequeueF(deq));
//     DEQtraversal(deq);

//     enqueueF(deq,13);
//     DEQtraversal(deq);
//     return 0;
// }
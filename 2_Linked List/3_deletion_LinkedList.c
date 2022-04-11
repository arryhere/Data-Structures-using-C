// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *head){
//     struct Node *ptr = head;
//     while(ptr != NULL){
//         printf("%d ",(*ptr).data);
//         ptr = (*ptr).next;
//     }
//     printf("\n");
// }

// //delete first
// struct Node * deleteFirst(struct Node *head){
//     struct Node *p = head;
//     head = (*head).next;
//     free(p);
//     return head;
// }

// //delete at index
// void deleteAtIndext(struct Node *head,int index){
//     struct Node *p = head;

//     int i=0;
//     while(i<index-1){
//         p = (*p).next;
//         i++;
//     }

//     struct Node *q = (*p).next;
//     (*p).next = (*q).next;
//     free(q);
// }

// //delete last
// void deleteLast(struct Node *head){
//     struct Node *p = head;
//     struct Node *q;

//     while((*p).next != NULL){
//         q = p;
//         p = (*p).next;
//     }

//     (*q).next = NULL;
//     free(p);
// }

// //delete at value
// void deleteAtValue(struct Node *head,int value){
//     struct Node *p = head;
//     struct Node *q;

//     while((*p).data != value && (*p).next != NULL){
//         q = p;
//         p = (*p).next;
//     }

//     if((*p).data == value){
//         (*q).next = (*p).next;
//         free(p);
//     }
// }

// //delete at value inc first
// struct Node * deleteAtValueIncFirst(struct Node *head,int value){
//     struct Node *p = head;
//     struct Node *q;

//     if((*p).data == value){
//         return deleteFirst(p);
//     }
//     else{
//         while((*p).data != value && (*p).next != NULL){
//             q = p;
//             p = (*p).next;
//         }

//         if((*p).data == value){
//             (*q).next = (*p).next;
//             free(p);
//         }

//         return head;
//     }
// }   


// int main() {
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *forth = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *fifth = (struct Node *)malloc(sizeof(struct Node)); 

//     (*head).data = 28;
//     (*head).next = second;
//     (*second).data = 5;
//     (*second).next = third;
//     (*third).data = 19;
//     (*third).next = forth;
//     (*forth).data = 99;
//     (*forth).next = fifth;
//     (*fifth).data = 5;
//     (*fifth).next = NULL;

//     linkedListTraversal(head);

//     // head = deleteFirst(head);
//     // linkedListTraversal(head);

//     // deleteAtIndext(head,2);
//     // linkedListTraversal(head);

//     // deleteLast(head);
//     // linkedListTraversal(head);

//     // deleteAtValue(head,5);
//     // linkedListTraversal(head);

//     // head = deleteAtValueIncFirst(head,5);
//     // linkedListTraversal(head);

//     return 0;
// }
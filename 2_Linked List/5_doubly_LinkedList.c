// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
//     struct Node *prev;
// };

// void traversalDLL(struct Node *head){
//     struct Node *p = head;

//     while(p != NULL){
//         printf("%d ",(*p).data);
//         p = (*p).next;
//     }
//     printf("\n");
// }

// struct Node * insertFirst(struct Node *head,int value){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = value;
//     (*head).prev = ptr;
//     (*ptr).next = head;
//     (*ptr).prev = NULL;

//     head = ptr;
//     return head;
// }

// void insertEnd(struct Node *head,int value){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = value;

//     struct Node *p = head;
//     while((*p).next != NULL){
//         p = (*p).next;
//     }

//     (*p).next = ptr;
//     (*ptr).prev = p;
//     (*ptr).next = NULL;
// }

// void insertAtIndex(struct Node *head,int value,int index){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = value;

//     struct Node *p = head;
//     int i=0;
//     while(i < index){
//         p = (*p).next;
//         i++;
//     }

//     struct Node *q = (*p).prev;

//     (*q).next = ptr;
//     (*ptr).prev = q;

//     (*p).prev = ptr;
//     (*ptr).next = p;
// }

// int main() {
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *forth = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *fifth = (struct Node *)malloc(sizeof(struct Node)); 

//     (*head).data = 28;
//     (*head).next = second;
//     (*head).prev = NULL;
    
//     (*second).data = 5;
//     (*second).next = third;
//     (*second).prev = head;

//     (*third).data = 19;
//     (*third).next = forth;
//     (*third).prev = second;

//     (*forth).data = 99;
//     (*forth).next = fifth;
//     (*forth).prev = third;

//     (*fifth).data = 5;
//     (*fifth).next = NULL;
//     (*fifth).prev = forth;

//     traversalDLL(head);

//     head = insertFirst(head,60);
//     traversalDLL(head);

//     insertEnd(head,60);
//     traversalDLL(head);

//     insertAtIndex(head,60,2);
//     traversalDLL(head);

//     return 0;
// }
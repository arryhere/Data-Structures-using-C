// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void traversalCLL(struct Node *head){
//     struct Node *p = head;
//     while((*p).next != head){
//         printf("%d ",(*p).data);
//         p = (*p).next;
//     }
//     printf("%d\n",(*p).data);       //print last data
// }

// //insert at first
// struct Node * insertAtFirst(struct Node *head,int value){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = value;

//     struct Node *p = head;
//     while((*p).next != head){
//         p = (*p).next;
//     }

//     (*p).next = ptr;
//     (*ptr).next = head;

//     head = ptr;
//     return head;
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
//     (*fifth).next = head;

//     traversalCLL(head);

//     head = insertAtFirst(head,69);
//     traversalCLL(head);

//     return 0;
// }
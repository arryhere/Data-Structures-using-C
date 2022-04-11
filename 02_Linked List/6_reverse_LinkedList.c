// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void linkedListTraversal(struct Node *head){
//     while(head != NULL){
//         printf("%d ",(*head).data);
//         head = (*head).next;
//     }
//     printf("\n");
// }

// //reverse iterative
// struct Node * reverseIterative(struct Node *head){
//     struct Node *current;
//     struct Node *prev;
//     struct Node *after;

//     current = head;
//     prev = NULL;

//     while(current != NULL){
//         after = (*current).next;
//         (*current).next = prev;
//         prev = current;
//         current = after;
//     }
//     return prev;
// }

// //reverse recursive
// struct Node * reverseRecursive(struct Node *head){
//     struct Node *p = head;
//     struct Node* new_head;
//     if((*p).next==NULL){
//         new_head = p;
//         return new_head;
//     }

//     new_head = reverseRecursive((*p).next);
//     struct Node* q = (*p).next;
//     (*q).next = p;
//     (*p).next = NULL;
//     return new_head;
// }

// int main() {
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *forth = (struct Node *)malloc(sizeof(struct Node)); 

//     (*head).data = 28;
//     (*head).next = second;

//     (*second).data = 5;
//     (*second).next = third;

//     (*third).data = 19;
//     (*third).next = forth;

//     (*forth).data = 99;
//     (*forth).next = NULL;

//     linkedListTraversal(head);

//     head = reverseIterative(head);
//     linkedListTraversal(head);

//     head = reverseRecursive(head);
//     linkedListTraversal(head);
//     return 0;
// }
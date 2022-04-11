// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>
// # include <ctype.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// //traversal
// void linkedListTraversal(struct Node *ptr){
//     while(ptr != NULL){
//         printf("%d ",(*ptr).data);
//         ptr = (*ptr).next;
//     }
//     printf("\n");
// }

// //insert at first
// struct Node * insertAtFirst(struct Node *head,int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = data;
//     (*ptr).next = head;
//     return ptr;     //ptr is the new head
// }

// //insert at index
// void insertAtIndex(struct Node *head,int data,int index){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
    
//     int i=0;
//     while(i!=index-1){
//         p = (*p).next;
//         i++;
//     }
//     (*ptr).next = (*p).next;
//     (*p).next = ptr;
//     (*ptr).data = data;
// }

// //insert at end
// void insertAtEnd(struct Node *head,int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     while((*p).next != NULL){
//         p = (*p).next;
//     }

//     (*p).next = ptr;
//     (*ptr).next = NULL;
//     (*ptr).data = data;
// }

// //insert after
// void insertAfter(struct Node *p,int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     (*ptr).data = data;
//     (*ptr).next = (*p).next;
//     (*p).next = ptr;
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

//     head = insertAtFirst(head,50);
//     linkedListTraversal(head);

//     insertAtIndex(head,60,3);
//     linkedListTraversal(head);

//     insertAtEnd(head,70);
//     linkedListTraversal(head);

//     insertAfter(second,69);
//     linkedListTraversal(head);

//     return 0;


//     char a= 'C';
//     char b = tolower(a);
//     printf("%c",b);
// }
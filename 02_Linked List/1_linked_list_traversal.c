// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *ptr){
//     while(ptr != NULL){
//         printf("%d ",(*ptr).data);
//         ptr = (*ptr).next;
//     }
//     printf("\n");
// }

// int main() {

//     //allocate memory for nodes in heap
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node)); 
//     struct Node *forth = (struct Node *)malloc(sizeof(struct Node)); 

//     //link first and second nodes
//     (*head).data = 28;
//     (*head).next = second;

//     //link second and third nodes
//     (*second).data = 5;
//     (*second).next = third;

//     //link third and forth nodes
//     (*third).data = 19;
//     (*third).next = forth;

//     //TERMINATE the linked list
//     (*forth).data = 99;
//     (*forth).next = NULL;

//     linkedListTraversal(head);

//     return 0;
// }
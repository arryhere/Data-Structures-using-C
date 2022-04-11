// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node * createNode(int data){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));        //root node
//     (*n).data = data;
//     (*n).left = NULL;
//     (*n).right = NULL;
//     return n;
// }

// int main() {
//     /*
//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));        //root node
//     (*p).data = 2;
//     (*p).left = NULL;
//     (*p).right = NULL;

//     struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));       //2nd node
//     (*p1).data = 2;
//     (*p1).left = NULL;
//     (*p1).right = NULL;

//     struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));       //3rd node
//     (*p2).data = 2;
//     (*p2).left = NULL;
//     (*p2).right = NULL;

//     (*p).left = p1;     //linking them with root
//     (*p).right = p2;
//     */

//    struct Node * p = createNode(2);
//    struct Node * p1 = createNode(1);
//    struct Node * p2 = createNode(4);

//     (*p).left = p1;
//     (*p).right = p2;

//     return 0;
// }
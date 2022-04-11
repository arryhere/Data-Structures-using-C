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

// void inOrder(struct Node * root){
//     if(root != NULL){
//         inOrder((*root).left);
//         printf("%d ",(*root).data);
//         inOrder((*root).right);
//     }
// }

// int isBST(struct Node *root){
//     static struct Node *prev = NULL;
//     if(root != NULL){
//         if(!isBST((*root).left)){
//             return 0;
//         }
//         if( prev!=NULL && (*root).data <= (*prev).data ){
//             return 0;
//         }
//         prev = root;
//         return isBST((*root).right);
//     }
//     else{
//         return 1;
//     }
// }


// int main() {

//    struct Node * p = createNode(5);
//    struct Node * p1 = createNode(3);
//    struct Node * p2 = createNode(6);        //2
//    struct Node * p3 = createNode(1);
//    struct Node * p4 = createNode(4);

//     (*p).left = p1;
//     (*p).right = p2;

//     (*p1).left = p3;
//     (*p1).right = p4;

//     inOrder(p);

//     printf("\n");

//     printf("%d",isBST(p));
//     return 0;
// }
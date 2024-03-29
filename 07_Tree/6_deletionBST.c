// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node * createNode(int data){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
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
// struct Node * inorderPredecessor(struct Node *root){
//     root = (*root).left;
//     while((*root).right != NULL){
//         root = (*root).right;
//     }
//     return root;
// }

// struct Node * deleteNode(struct Node *root , int key){
//     if(root == NULL){
//         return NULL;
//     }
//     if((*root).left == NULL && (*root).right == NULL){
//         free(root);
//         return NULL;
//     }

//     if(key < (*root).data){
//         (*root).left = deleteNode((*root).left , key);
//     }
//     else if(key > (*root).data){
//         (*root).right = deleteNode((*root).right , key);
//     }
//     else {
//         struct Node *iPre = inorderPredecessor(root);
//         (*root).data = (*iPre).data;
//         (*root).left =  deleteNode((*root).left , (*iPre).data);
//     }
//     return root;
// }

// int main() {

//    struct Node * p = createNode(5);
//    struct Node * p1 = createNode(3);
//    struct Node * p2 = createNode(6);
//    struct Node * p3 = createNode(1);
//    struct Node * p4 = createNode(4);
// /*
//             5
//            / \
//           3   6
//          / \
//         1   4 

// */

//     (*p).left = p1;
//     (*p).right = p2;

//     (*p1).left = p3;
//     (*p1).right = p4;

//     inOrder(p); printf("\n");
    
//     deleteNode(p , 1);

//     inOrder(p); printf("\n");


//     return 0;
// }
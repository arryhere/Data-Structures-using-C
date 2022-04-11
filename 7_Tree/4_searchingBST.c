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

// struct Node * searchBSTRecursive(struct Node * root , int key){
//     if( root == NULL){
//         return NULL;
//     }
//     else{
//         if(key == (*root).data){
//             return root;
//         }
//         else if(key < (*root).data){
//             return searchBSTRecursive((*root).left , key);
//         }
//         else if(key > (*root).data){
//             return searchBSTRecursive((*root).right , key);
//         }
//     }
// }

// int searchBStIterative(struct Node * root , int key){
//     int value;

//     if(root == NULL){
//         printf("Element not found !\n");
//         return -1;
//     }
//     else{
//         while(root != NULL){
//             if(key == (*root).data){
//                 value = (*root).data;
//                 break;
//             }
//             else if(key < (*root).data){
//                 root = (*root).left;
//             }
//             else if(key > (*root).data){
//                 root = (*root).right;
//             }
//         }
//         if(root == NULL){
//             printf("Element not found !\n");
//             return -1;
//         }
//         else{
//             printf("Element found : %d\n",value);
//             return value;
//         }
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

//     //recursive
//     struct Node *value = searchBSTRecursive(p,4);
//     if(value == NULL){
//         printf("KEY NOT PRESENT\n");
//     }
//     else{
//         printf("KEY PRESENT : %d\n",(*value).data);
//     }

//     //iterative
//     searchBStIterative(p,33);
    


//     return 0;
// }
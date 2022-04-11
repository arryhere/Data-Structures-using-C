// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Stack{
//     int size;
//     int top;
//     int *arr;
// };

// //is empty
// void isEmpty(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack is empty");
//     }
//     else{
//         printf("Stack is not empty");
//     }
// }

// //is full
// void isFull(struct Stack *s){
//     if((*s).top == (*s).size - 1){
//         printf("Stack is full");
//     }
//     else{
//         printf("Stack is not full");
//     }
// }


// int main() {
//     // struct Stack s;
//     // s.size = 80;
//     // s.top = -1;
//     // s.arr = (int *)malloc(s.size * sizeof(int));

//     //creating stack using pointer then initializing the stack in heap memory
//     struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
//     (*s).size = 80;
//     (*s).top = -1;
//     (*s).arr = (int *)malloc(((*s).size) * sizeof(int));

//     (*s).arr[0] = 5;
//     (*s).top++;

//     isEmpty(s);

//     return 0;
// }
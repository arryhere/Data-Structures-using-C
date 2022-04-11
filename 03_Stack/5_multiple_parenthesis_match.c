// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct Stack{
//     int size;
//     int top;
//     char *arr;
// };

// //traversal
// void traversalStack(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack is empty\n");
//     }
//     else{
//         for(int i=0;i<= (*s).top;i++){
//             printf("%d ",(*s).arr[i]);
//         }
//         printf("\n");
//     }
// }

// //is empty
// int isEmpty(struct Stack *s){
//     if((*s).top == -1){
//         // printf("Stack is empty\n");
//         return 1;
//     }
//     else{
//         // printf("Stack is not empty\n");
//         return 0;
//     }
// }

// //is full
// int isFull(struct Stack *s){
//     if((*s).top == (*s).size - 1){
//         printf("Stack is full\n");
//         return 1;
//     }
//     else{
//         printf("Stack is not full\n");
//         return 0;
//     }
// }

// //push
// void push(struct Stack *s,char value){
//     if((*s).top == (*s).size - 1){
//         printf("Stack Overflow , at value [%d]\n",value);
//     }
//     else{
//         (*s).arr[(*s).top + 1] = value;
//         (*s).top = (*s).top + 1;
//     }
// }

// //pop
// char pop(struct Stack *s){
//     if((*s).top == -1){
//         printf("Stack Underflow\n");
//         return '-1';
//     }
//     else{
//         int value = (*s).arr[(*s).top];
//         (*s).top = (*s).top - 1;
//         return value;
//     }
// }

// //match
// int check(char a , char b){
//     if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// //parenthesis match
// int parenthesisMatch(char *exp,int size){
//     struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
//     (*s).size = size;
//     (*s).top = -1;
//     (*s).arr = (char *)malloc(((*s).size) * sizeof(char));

//     for(int i=0;exp[i]!='\0';i++){
//         if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
//             push(s,exp[i]);
//         }
//         else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
//             if(isEmpty(s)){
//                 return 0;
//             }
//             char popped_ch = pop(s);

//             if(check(popped_ch,exp[i]) == 0){
//                 return 0;
//             }

//         }
//     }

//     if(isEmpty(s)){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }



// int main() {
//     char exp [] = "{([e^(-((T-thr))/T)] )}";
//     int size = sizeof(exp)/sizeof(exp[0]);

//     if(parenthesisMatch(&exp[0],size)){
//         printf("parenthesis is matching");
//     }
//     else{
//         printf("parenthesis is not matching");
//     }


//     return 0;
// }
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
//         return -1;
//     }
//     else{
//         int value = (*s).arr[(*s).top];
//         (*s).top = (*s).top - 1;
//         return value;
//     }
// }

// //stackTop
// char stackTop(struct Stack *s){
//     return (*s).arr[(*s).top];
// }

// //precedence
// int precedence(char c){
//     if(c == '*' || c == '/' || c == '%'){
//         return 3;
//     }
//     else if(c == '+' || c == '-'){
//         return 2;
//     }
//     else{
//         return 0;
//     }
// }

// //isOperator
// int isOperator(char c){
//     if(c == '*' || c == '/' || c == '%' || c == '+' || c == '-'){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// //infix to postfix
// char * infixToPostfix(char *infix,int size){

//     struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
//     (*s).size = 100;        //+10 for to be safe
//     (*s).top = -1;
//     (*s).arr = (char *)malloc((*s).size * sizeof(char));

//     char *postfix = (char *)malloc(size * sizeof(char));

//     int i=0;    //track infix traversal
//     int j=0;    //track postfix addition

//     while(infix[i] != '\0'){

//         if(!isOperator(infix[i])){
//             postfix[j] = infix[i];
//             j++;
//             i++;
//         }
//         else{
//             if(precedence(infix[i]) > precedence(stackTop(s))){
//                 push(s,infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[j] = pop(s);
//                 j++;
//             }
//         }
//     }
//     while(!isEmpty(s)){
//         postfix[j] = pop(s);
//         j++;
//     }
//     postfix[j] = '\0';

//     return postfix;

    
// }


// int main() {
//     char exp [] = "x-y/z-k*d";
//     int size = sizeof(exp)/sizeof(exp[0]);

//     char *ptr = infixToPostfix(exp,size);

//     printf("%s",ptr);
    


//     return 0;
// }
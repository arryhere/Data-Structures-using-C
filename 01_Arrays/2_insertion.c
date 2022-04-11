// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr [],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int insertion(int arr[],int capacity,int size,int element,int index){
//     if(capacity <= size){
//         printf("Insertion failed !\n");
//         return -1;
//     }
//     else{
//         for(int i=size-1;i>=2;i--){
//             arr[i+1] = arr[i];
//         }
//         arr[2] = element;
//         printf("Insertion successfuull !\n");
//         return 0;
//     }
// }

// int main() {
//     int capacity = 100;
//     int arr[capacity];
//     arr[0] = 11;
//     arr[1] = 22;
//     arr[2] = 33;
//     arr[3] = 44;
//     arr[4] = 55;
//     int size = 5;      //sizeof(arr)/sizeof(arr[0]) = 400/4 = 100
//     displayArray(arr,size);

//     int element = 69 , index = 2;
//     if(insertion(arr,capacity,size,element,index) == 0){       //function call and check
//         size += 1;
//         displayArray(arr , size);
//     }
    

//     return 0;
// }
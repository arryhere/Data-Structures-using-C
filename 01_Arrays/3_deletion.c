// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr [],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int deletion(int arr[],int index,int size){
//     for(int i=index;i<size;i++){
//         arr[i] = arr[i+1];
//     }
//     printf("Deletion successful !\n");
//     return 0;
// }

// int main() {
//     int capacity = 50;
//     int arr[capacity];
//     arr[0] = 55;
//     arr[1] = 66;
//     arr[2] = 77;
//     arr[3] = 88;
//     arr[4] = 99;
//     int size = 5;

//     displayArray(arr,size);

//     int index = 0;
//     if(deletion(arr,index,size) == 0){
//         size -=1;
//         displayArray(arr,size);
//     }

//     return 0;
// }
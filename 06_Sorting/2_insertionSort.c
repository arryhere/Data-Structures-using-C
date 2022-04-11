// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void insertionSort(int arr [] , int size){
//     for(int i=1;i<=size-1;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(key < arr[j] && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// int main() {
//     int arr [] = {23,44,52,2,4,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr,size);

//     insertionSort(arr,size);
//     displayArray(arr,size);
//     return 0;
// }
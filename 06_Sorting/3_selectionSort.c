// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void selectionSort(int arr [] , int size){
//     for(int i=0;i<size-1;i++){
//         int indexOfMin = i;
//         for(int j=i+1;j<=size-1;j++){
//             if(arr[j] < arr[indexOfMin]){
//                 indexOfMin = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[indexOfMin];
//         arr[indexOfMin] = temp;
//     }
// }

// int main() {
//     int arr [] = {23,44,52,2,4,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr,size);

//     selectionSort(arr,size);
//     displayArray(arr,size);

//     return 0;
// }

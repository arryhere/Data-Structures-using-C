// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void bubbleSort(int arr [] , int size){
//     int isSorted;

//     for(int i=0;i<size-1;i++){

//         printf("pass %d\n",i+1);
//         isSorted = 1;

//         for(int j=0;j<size-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;

//                 isSorted = 0;
//             }
//         }
//         if(isSorted == 1){
//             break;
//         }
//     }
// }

// int main() {
//     // int arr [] = {23,44,52,2,4,2};
//     int arr [] = {1,2,3,4,6,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr,size);

//     bubbleSort(arr,size);
//     displayArray(arr,size);

//     return 0;
// }
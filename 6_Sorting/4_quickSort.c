// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int partition(int arr [] , int low , int high){
//     int pivot = arr[low];
//     int i = low+1;
//     int j = high;

//     do{
//         while(arr[i] < pivot){
//             i++;
//         }
//         while(arr[j] > pivot){
//             j--;
//         }
//         if(i < j){
//             int temp1 = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp1;
//         }
//     }while(i<j);

//     int temp2 = arr[low];
//     arr[low] = arr[j];
//     arr[j] = temp2;

//     return j;
// }       


// void quickSort(int arr [] , int low , int high){
//     int partionIndex;       //index of pivot after partition

//     if(low<high){
//         partionIndex = partition(arr , low , high);
//         quickSort(arr , low , partionIndex-1);
//         quickSort(arr , partionIndex+1 , high);
//     }
// }

// int main() {
    
//     int arr [] = {23,44,52,2,4,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr,size);

//     quickSort(arr,0,size-1);
//     displayArray(arr,size);
//     return 0;
// }
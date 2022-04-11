// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void merging(int arr [],int size, int low, int mid, int high){
//     int i,j,k,brr[size];
//     i = low;
//     j = mid+1;
//     k = low;

//     while(i<=mid && j<=high){
//         if(arr[i] < arr[j]){
//             brr[k] = arr[i];
//             i++;
//             k++;
//         }
//         else{
//             brr[k] = arr[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<=mid){
//         brr[k] = arr[i];
//         i++;
//         k++;
//     }
//     while(j<=high){
//         brr[k] = arr[j];
//         j++;
//         k++;
//     }
//     //printf("%d %d\n",low,high);
//     for(int i=low;i<=high;i++){
//         arr[i] = brr[i];
//     }
// }

// void mergeSort(int arr [], int size, int low, int high){
//     if(low < high){
//         int mid = (low+high)/2;
//         mergeSort(arr, size, low, mid);
//         mergeSort(arr, size, mid+1, high);
//         merging(arr, size, low, mid, high);
//     }
// }

// int main() {
//     int arr [] = {23,44,52,2,4,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr, size);

//     mergeSort(arr, size, 0, size-1);
//     displayArray(arr, size);


//     return 0;
// }
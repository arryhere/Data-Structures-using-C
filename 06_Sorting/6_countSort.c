// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>
// # include <limits.h>

// void displayArray(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int maximum(int arr [], int size){
//     int max = INT_MIN;
//     for(int i=0;i<size;i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// void countSort(int arr [], int size){
//     int max = maximum(arr,size);
//     int m = max+1;
//     int *count = (int *)calloc(m , sizeof(int));

    
//     for(int i=0;i<size;i++){
//         count[arr[i]] = count[arr[i]] + 1;
//     }

//     int i = 0;
//     int j = 0;

//     while(i<m){
//         if(count[i] > 0){
//             arr[j] = i;
//             count[i] = count[i] - 1;
//             j++;
//         }
//         else{
//             i++;
//         }
//     }

// }

// int main() {
//     int arr [] = {23,44,52,2,4,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     displayArray(arr, size);

//     countSort(arr,size);
//     displayArray(arr,size);


//     return 0;
// }
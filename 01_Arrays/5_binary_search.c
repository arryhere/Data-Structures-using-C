// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void displayArray(int arr [],int size){
//     for(int i=0;i<size;i++){
//         printf("%d[%d] ",arr[i],i);
//     }
//     printf("\n");
// }

// void sortArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int binarySearch(int arr[],int size,int element){
//     int low, mid, high;
//     low = 0;
//     high = size-1;
//     mid = (low+high)/2;

//     int index = -1;
//     int itr = 0;
    
//     while(low<=high){
//         itr += 1;

//         if(element == arr[low]){
//             index = low;
//             break;
//         }
//         else if(element == arr[high]){
//             index = high;
//             break;
//         }
//         else if(arr[mid] == element){
//             index = mid;
//             break;
//         }
//         else if(element > arr[mid]){
//             low = mid+1;
//             high = high-1;
//         }
//         else if(element < arr[mid]){
//             high = mid-1;
//             low = low+1;
//         }
//         mid = (low+high)/2;
//     }

//     printf("Iterations - %d\n",itr);

//     return index;
// }

// int main() {

//     int arr[] = {10, 14, 28, 11, 7, 16, 30, 50, 25, 18};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     sortArray(arr,size);        //7 10 11 14 16 18 25 28 30 50
//     int element = 25;
//     displayArray(arr,size);

//     int indexResult = binarySearch(arr,size,element);
//     if(indexResult == -1){
//         printf("Element not found");
//     }
//     else{
//         printf("Element found, element - %d, index - %d",element,indexResult);
//     }

//     return 0;
// }
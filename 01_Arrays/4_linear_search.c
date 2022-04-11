// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void linearSearch(int arr[],int size,int element){
//     int result = -1;
//     for(int i=0;i<size;i++){
//         if(element == arr[i]){
//             printf("Element found ! element - %d, index - %d\n",element,i);
//             result = 0;
//             break;
//         }
//     } 

//     if(result == -1){
//         printf("Element not found !");
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int element = 10;

//     linearSearch(arr,size,element);

//     return 0;
// }
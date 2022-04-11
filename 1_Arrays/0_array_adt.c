// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
//     int arr[] = {55,2,3,4,5};
//     int *ptr;
//     ptr = arr;      //ptr = &arr[0]
//     *(ptr+1) = 77;  //ptr[1] == 77

//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         printf("%d\n",ptr[i]);  //printf("%d\n",*(ptr+i));        //same thing
//     }
    

//     return 0;
// }
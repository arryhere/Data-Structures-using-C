// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// struct myArray{
//     int total_size;     //memory to be reserved
//     int used_size;      //memory to be used
//     int *ptr;           //pointer
// };

// void createArray(struct myArray *a,int tSize,int uSize){
//     (*a).total_size = tSize;
//     (*a).used_size = uSize;
//     (*a).ptr = (int*)malloc(tSize*sizeof(int));     //ptr containing address of first element in the dynamic array/heap memory location
// }

// void setArray(struct myArray *a){
//     printf("Enter the array\n");
//     for(int i=0;i<(*a).used_size;i++){
//         printf("Enter element [%d] - ",i);
//         scanf("%d",((*a).ptr)+i);           //add int to address changes it to next consecutive address //(address+i)
//     }
    
// }

// void showArray(struct myArray *a){
//     printf("The array is - ");
//     for(int i=0;i<(*a).used_size;i++){
//         printf("%d, ",((*a).ptr)[i]);       //printf("%d\n",*(((*a).ptr)+i)); same thing  //very imp tip //address[i] == *(address+i)
//     }
//     printf("\n");
    
// }

// void getIndex(struct myArray *a, int v){
//     printf("Element at index %d is - %d\n",v,*(((*a).ptr)+v));
// }

// void setIndex(struct myArray *a, int v){
//     printf("Enter the value to set at [%d] index - ",v);
//     scanf("%d",((*a).ptr)+v);
// }

// int main() {
//     struct myArray marks;
    
//     createArray(&marks,10,5);
//     setArray(&marks);
//     showArray(&marks);
//     getIndex(&marks,3);
//     setIndex(&marks,5);

//     showArray(&marks);

//     return 0;
// }
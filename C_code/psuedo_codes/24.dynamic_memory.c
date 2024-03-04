/*
Dynamic memory is stored in heap section.
Memory in stack gets automatically destroyed but in heap its programmer job to free the memory

malloc and calloc is similar - in malloc memory initialization with garbage value
                               in calloc memory initialization with 0 value

Dangling Pointer: points to a memory location that has been deallocated or freed using free() or memory goes out of scope. 
                  but the pointer still holds the address of that memory location.Accessing or dereferencing a dangling pointer 
                  can lead to undefined behavior, crashes, or unexpected results because the memory it points to may have been reassigned to other data or freed.

Memory leakage: occurs when allocated memory isn't properly deallocated even after it's no longer needed. 
                Over time, repeated memory leakage can consume all available memory, leading to performance issues or crashes.
                If there are too many dangling pointers then there is a chances of memory leakage.

#include<stdlib.h> for malloc, calloc, realloc, free functions.
*/ 

#include<stdio.h>
#include<stdlib.h>



// int main(void)
// { 
//    int n;
//    int i;
//    int *ptr=NULL;

//    printf("\n enter number of elements you wish to insert in an array : ");
//    scanf("%d",&n);
   
   
   //1. REQUEST MEMORY DYNAMICALLY

//    ptr=(int *)malloc(sizeof(int) * n); // 4 * 8 = 16 bytes will be allocated
   //void *malloc(size_t __size)
   //pls allocate n blocks of sizeof(int) data
   // void * is a generic pointer 
   // size_t is unsigned only positive values of memory is allocated

//    if(ptr==NULL)
//    {
//        printf("\n Memory can not be allocated");
//        return 0;
//    }
   //2.If memory is allocated successfully then use that memory
//    else
//    {
//        printf("\n Enter %d Array elements : ",n);
//        for(i=0;i<n;i++)
//         scanf("%d",&ptr[i]);
//         printf("Array elements are : ");
//         for(i=0;i<n;i++)
//         printf("\n ptr[%d]=%d at &ptr[%d]=%u",i,ptr[i],i,&ptr[i]);
    
//     }

    //3.release the dynamic memory
//     free(ptr);//dangling pointer
//     ptr=NULL; // avoid memory leakage 
//         return 0;
// }




// int main(void)
// { 
//    int n;
//    int i;
//    char *ptr=NULL;

//    printf("\n enter number of elements you wish to insert in an array : ");
//    scanf("%d",&n);
   
   
   //1. REQUEST MEMORY DYNAMICALLY

//     ptr=(int *)calloc(n,sizeof(int));
    //void *calloc(size_t __nmemb, size_t __size)

//    if(ptr==NULL)
//    {
//        printf("\n Memory can not be allocated");
//        return 0;
//    }
   //2.If memory is allocated successfully then use that memory
//    else
//    {
//        printf("\n Enter %d Array elements : ",n);
//        for(i=0;i<n;i++)
//         scanf("%d",&ptr[i]);
//         printf("Array elements are : ");
//         for(i=0;i<n;i++)
//         printf("\n ptr[%d]=%d at &ptr[%d]=%p",i,ptr[i],i,&ptr[i]);
    
//     }

    //3.release the dynamic memory
//     free(ptr);//dangling pointer
//     ptr=NULL; // avoid memory leakage 
//         return 0;
// }

// if char ptr is used ptr=(int *)calloc(n,sizeof(int)); then only first 8 bytes will stored refer to pointers file line 100.




//realloc
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int* ptr;
//     int size;

    // Initial allocation of memory for 5 integers
//     size = 5;
//     ptr = (int*)malloc(size * sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter %d Array elements: ", size);
//     for (int i = 0; i < size; ++i) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("Array elements are: \n");
//     for (int i = 0; i < size; ++i) {
//         printf("ptr[%d]=%d at &ptr[%d]=%p\n", i, ptr[i], i, (void*)&ptr[i]); //void is return type for %p
//     }

    // Resizing the allocated memory to hold 10 integers
//     size = 10;
//     ptr = (int*)realloc(ptr, size * sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory reallocation failed!\n");
//         return 1;
//     }

//     printf("Enter %d additional Array elements: ", size - 5);
//     for (int i = 5; i < size; ++i) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("Updated Array elements are: \n");
//     for (int i = 0; i < size; ++i) {
//         printf("ptr[%d]=%d at &ptr[%d]=%p\n", i, ptr[i], i, (void*)&ptr[i]);
//     }

    // Free the allocated memory
//     free(ptr);
//     ptr=NULL;
//     return 0;
// }

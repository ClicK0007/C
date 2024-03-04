/*
int arr1[5] = {1, 2, 3, 4, 5}; // Initializing with specified values
int arr2[] = {1, 2, 3};        // Compiler infers size from the number of values
char str[] = "Hello";          // Initializing with a string literal
int a[5];// array declaration

int arr[5] = {[0] = 2, [2] = 4}; // Initializes elements at indices 0 and 2

int* ptr = (int[]){1, 2, 3, 4}; // anonymous array // lifetime short - block level
printf("%d\n", ptr[2]); // Accessing the third element of the anonymous array
*/

#include<stdio.h>


// int main(void)
// {
    // int a[];  //Invalid declaration of array
    // int a[5]; //Initially garbage values will be stored
//     int a[5]={10,20,30}; // partial initialization of an array //while partial initialization remaining elements receives default value as 0
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("%4d at %p \n",a[i],&a[i]); // 
//     }
//     return 0;
// }
/* o/p-
10 at 0x7ffcd6f62d50   // addresses incremented by 4 in integer type arrays
20 at 0x7ffcd6f62d54 
30 at 0x7ffcd6f62d58 
 0 at 0x7ffcd6f62d5c 
 0 at 0x7ffcd6f62d60 
*/


// int main(void)
// {
//     int arr[5]={1,2,4};
//     int a[] = {1,2,3};
//     printf("%zu",sizeof(arr)); // arr[5] = 5*4 =20
//     printf("%zu",sizeof(a)); // 3*4 = 12
//     printf("\n sizeof a[0] = %zu \n",sizeof(a[0])); // 4
//     return 0;
// }



// int main(void)
// {
//     int arr[5]={1,2,3,4,5};
//     printf("arr : %p &arr:%p arr[0] : %p \n",arr,&arr,&arr[0]); // arr:0x7ffc7ac65850  &arr:0x7ffc7ac65850  arr[0]:0x7ffc7ac65850 
//     return 0;
// }

/*********************************
- Where there is '*' or '[]', it refers to array elements.
- If '&arr', 'arr', 'arr+1', '&arr[0]' these are related to addresses.
- Addresses of integers ('int') are typically incremented by the size of an integer, 
  which is usually 4 bytes on many systems.
- '&arr' represents the address of the entire block of the array, 
  while '&arr[i]' represents the address of individual elements.
**********************************/

// int main() {
//     int* ptr = (int[]){10, 20, 30, 40}; // Creating an array using a compound literal
//     printf("%d ", ptr[2]);      // 30
//     printf("%d ", *(ptr + 2));  // 30  // * is separate
//     printf("%d ", *ptr + 2);    // 10+2 = 12
//     printf("%d ", (*ptr + 2));  // 10+2 = 12
//     return 0;
// }

// int main(void)
// {
//     int arr[3]={1,2,3};
    /*  
         1     2     3
        arr  arr+1  arr+2
        828  832    836       840  844  848      852  856  860
        &arr(block1)         &arr+1(block2)     &arr+2(block3) 
    */
//     printf("arr : %p &arr:%p arr[0] : %p \n", arr, &arr, &arr[0]); // arr : 0x7ffe1fba1e7c &arr:0x7ffe1fba1e7c arr[0] : 0x7ffe1fba1e7c 
//     printf("arr+1 = %p arr[1]:%p \n", arr+1, &arr[1]); // arr+1 = 0x7ffe1fba1e80 arr[1]:0x7ffe1fba1e80  
//     printf("arr+2 = %p arr[2]:%p \n", arr+2, &arr[2]); // arr+2 = 0x7ffe1fba1e84 arr[2]:0x7ffe1fba1e84
//     printf("&arr+1 = %p \n", &arr+1); // &arr+1 = 0x7ffe1fba1e88  // address of next memory block after arr block
//     printf("&arr+2 = %p \n", &arr+2); //  &arr+2 = 0x7ffe1fba1e94  // address of next next memory block after arr block
//     return 0;  
// }
/*
arr: Represents the address of the first element of the array arr. Since arr is the array name itself, it points to the first element (arr[0]).
&arr: Represents the address of the whole array arr. It's the same as the address of its first element.
&arr[0]: Represents the address of the first element (arr[0]). It's equivalent to arr.

arr+1: Points to the address of the next element after arr[0] in the array (arr[1]).
&arr+1: Represents the address of the array arr incremented by 1. It's the address of the next memory block after the array.
&arr+2: Represents the address of the array arr incremented by 2. It points to the memory location beyond two blocks of memory after the array arr.
*/



//a[i]  ===> array notation
//*(a+i) ===> Pointer Notation

//a[0] = *(a+0)
//a[1] = *(a+1)
//a[2] = *(a+2)

// int main(void)
// {
//     int a[5]={10,20,30,40,50};
//     printf("a[0]=%d *(a+0)=%d",a[0],*(a+0)); // a[0]=10 *(a+0)=10
//     printf("\n &a[0]=%p (a+0)=%p ",&a[0],(a+0)); // &a[0]=0x7ffeff3c0750 (a+0)=0x7ffeff3c0750 
//     printf("\n &a[1]=%p (a+1)=%p ",&a[1],(a+1)); // &a[1]=0x7ffeff3c0754 (a+1)=0x7ffeff3c0754
//     return 0;
// }
//a[0] = 816
// a = 816
//a+0 = 816+0=816 
//*(a+0) = *(816) = 10

// a[1] = 820    
// *(a+1) = *(816+ 1*sizeof(int)) = *(820) = 20

//a[2] = 824
//*(a+2) = *(816+ 2*sizeof(int)) = *(824) = 30

//a[3] = 828
//*(a+3) = *(816+ 3*sizeof(int)) = *(828) = 40

//a[4] = 832
//*(a+2) = *(816+ 4*sizeof(int)) = *(832) = 50



// int main(void)
// {
//     int a[4]={10,20,30,40};
//     printf("%d %d",*a,*(a+1)); // 10 20
//     //*a = value at base address = 10
//     //*(a+1) //value at (baseaddress+1) //value at second element =20
//     return 0;
// }



// int main(void)
// {
//     int a[4]={10,20,30,40};
//     printf("%d %d",*a,*a+1);  // 10 11
//     //*a+1 //value at base address +1 //10+1 //11
//     return 0;
// }



// int main(void)
// {
//     int a[5]={10,20,30,40,50};
//     printf("%d",*a+4);           // 10+4 = 14
//     printf("%d \n",*(a+2)+5);    // 30+50 = 35
//     printf("%d \n",*a+3+4);      // 10+3+4 = 17
//     printf("%d \n",*(a+1)+*(a+3)); // 20 + 40 = 60

//     return 0;
// }



// int main(void)
// {
//     int a[3]={10,20,30};
//     printf("%d %d %d %d",a[0],0[a],*(a+0),*(0+a)); // 10 10 10 10
//     printf("\n %d %d %d %d \n",a[1],1[a],*(a+1),*(1+a)); // 20 20 20 20

//     return 0;
// }
//0[a] is equivalent to a[0]. This might seem unconventional, but due to the commutative property of addition, 0[a] is treated the same as a[0]. Both represent the value at index 0.

// ---------------------------------- Array in Functions------------------------------



// void accept(int a[]) {
//     a[0] = 10; // Modifying the first element of the array
// }
// int main() {
//     int arr[4] = {1, 2, 3, 4};
//     accept(arr); // Passing the array 'arr' to the function
    // Now 'arr[0]' will be modified to '10' as 'a' in 'accept' points to 'arr'
//     printf("a[0]= %d",arr[0] );
//     return 0;
// }



// void accept(int a[4]); //function having array as an argument
// int main(void)
// {
//     int a[4];
//     accept(a);//base address will sent
    
//     return 0;
// }

// void accept(int a[4]) // same base address
// {
//     int i;
//     printf("\n Enter array elements ");
//     for(i=0;i<4;i++){
       //scanf("%d",&a[i]); //array notation
//         scanf("%d",(a+i)); //pointer notation
//     }
//     printf("\n Array elements are : ");
//     for(i=0;i<4;i++){
        //printf("%5d at %p \n",a[i],&a[i]);
//         printf("%5d at %p \n",*(a+i),(a+i));
//     }
// }


/*
auto 
- Global declaration not allowed
- By Default - storage class is auto in function 
- DEFAULT VALUE - Garbage value
- SCOPE - Block / Function
- LOCATION - Stack
- LIFETIME - within a block/Function

Register 
- Global declaration not allowed
- & (address) these operator is not used with register as it does not have any memory location in memory
    register int i;
    int *ptr;
    ptr = & i; // Not allowed
    int *i; allowed
- Default Value: Garbage value Scope: Block/Function 
- Location: CPU registers (if possible) 
- Lifetime: Within the block/function; faster access than variables stored in memory 

Static 
- By Default: Not default; requires explicit declaration (static int x;) 
- Default Value: Zero (0) for global/static variables; 0 for local static variables; for char string - NULL, for float - 0.0000000
- Scope: Block/Function (for local statics); File/Global (for global statics) 
- Location: Data segment (global/static variables); memory segment, but retains value between function calls (local static variables) 
- Lifetime: Throughout the program (global/static); within the block/function but retains value between function calls (local static) 

Extern 
- By Default: Global variable is declared as extern
- Default Value: Contains the address of the variable (0 for uninitialized variables) 
- Scope: Global/External (for a variable declared in another file) 
- Location: Memory segment 
- Lifetime: Throughout the program, reflects the lifetime of the actual variable it refers to in another file
*/ 

#include<stdio.h>

//static int val=i; //error: initializer element is not constant

// // auto int a =1; //Error
// int a = 1; // global scope
// void print_a(){
//     printf("%d",a);
// }
// int main(){
//     int a = 2; // function scope
//     {
//         int a = 3; //block scope
//         printf("%d",a); //3
//     }
//     printf("%d",a); //2
// }




// void display();
// int main (){
//     display ();
//     display ();
// }
// void display(){
//     static int x; // on second call these line will be skipped
//     x+=10;
//     printf("%d ",x); //10 20
// } 



// int main(){
//     // printf("%d",a); //Error- a is not declared
//     extern int a; //a is declared somewhere else out of these block
//     printf("%d",a); // 10
// }
// int a = 10;



//file1.c
// int x = 10;
// extern void display();
// int main(){
//     display(); // Calling the display function from another file
// }

//file2.c
// void display(){
//     extern int x;
//     x++; //modification is also allowed for extern variable from other file. Same memory is used
//     printf("%d",x);
// }





// static int s_val = 10; // Static global variable in DATA Section

// void test1() {
//     printf("\n Test1: s_val=%d &s_val=%p", s_val, &s_val);
//     s_val += 100; // Increment s_val by 100
// }

// void test2() {
//     printf("\n Test2: s_val=%d &s_val=%p", s_val, &s_val);
//     s_val += 5; // Increment s_val by 5
// }

// int main(void) {
//     printf("\n Main: s_val=%d &s_val=%p", s_val, &s_val);
//     test1(); // Call test1 function
//     test2(); // Call test2 function
//     printf("\n Back to Main: s_val=%d &s_val=%p \n", s_val, &s_val);
//     return 0;
// }




// void test();
// int main(void)
// {
//     test();
//     printf("\n Back to main");
//     test();
//     return 0;
// }
// void test()
// {
//     static int val; //static variable declaration
//     val=10; //assigning value to static varibale at the later stage
    //if we initialize static variable at the later stage
    //then it voilets the property of static
    //it is treated as auto variable
    // STATIC VARIABLES MUST BE INITIALIZED AT THE TIME OF DECLARATION ONLY
//     int n=30; //local variable initialization
//     printf("\n Val=%d &val=%p N=%d",val,&val,n);
//     val+=5;
//     n+=5;
//     printf("\n Val=%d &val=%p N=%d \n",val,&val,n);
// }





// int i;
// void test();
// void test2();
// int main(void)
// {
//     i=20;
//     printf("main : i=%d &i=%p",i,&i);
//     test();
//     printf("\n back to main : i=%d &i=%p \n",i,&i);
//     test2();
//     return 0;
// }
// void test()
// {
//     i=30;
//     printf("\n test(): i=%d &i=%p",i,&i);
//     i+=4;
// }
// void test2()
// {
//     int i=500;//local variable
//     printf("\n test2: i=%d &i=%p \n",i,&i);
// }
/*o/p:
main : i=20 &i=0x562ea4e92014
 test(): i=30 &i=0x562ea4e92014
 back to main : i=34 &i=0x562ea4e92014 

 test2: i=500 &i=0x7ffc27634944 
*/ 


// extern int i;
// int main(void)
// {
//     printf("i=%d",i); //40
// }
// i=40;
// Function declaration
// int add(int a, int b); // Returns an integer, takes a and b are formal parameters or formal arguments

// Function definition
// int add(int a, int b) {
//     return a + b;
// }

// int result = add(3, 5); // '3' and '5' are actual arguments or actual parameters //fact checked

// void greet() {
//     printf("Hello, welcome!\n");
// } //No Return Type and No Arguments:

// ---------------------------------------------------------------------------------------------------

#include<stdio.h>

// int myset(int my) {
//     printf("%d ", my++); // Prints the value of 'my' (passed by my / 2) and increments 'my'         2
//     printf("%d ", my);   // Prints the incremented value of 'my'                                    3
//     return my = my <= 2 ? 5 : 0; // Updates 'my' based on the condition to 0
// }

// int main(void) {
//     int my = 5;
//     myset(my / 2); // Calls myset with the value 2 (my / 2)
//     printf("%d ", my); // Prints the value of 'my' from main                                        5
//     return 0;
// }



// int func(){
//   static int num =16;
//   return num--;
// }
// int main(void)
// {
//     for (func();func();func()){
//       printf("%d ",func()); //14 11 8 5 2
//     }
// }
/*
func(): It's a function that returns the current value of the static variable num and decrements it by 1 each time it's called. 
main(): The loop for (func(); func(); func()) does the following: 
    Initialization: func() is called once to initialize the loop. The num variable is set to 16 (post-increment behavior), but this value isn't used in the loop body. 
    Condition: func() is called as the loop condition. It decrements num to 15, which is considered true in the loop condition. 
    Loop Body: The printf statement inside the loop: Calls func() three times in the loop condition and body, resulting in num decreasing by 3 each iteration. 
                It prints the decremented value of num (i.e., 14 11 8 5 2). So, the output of the code will be 14 11 8 5 2 printed in a single line, representing the decremented values of num during each iteration of the loop.
*/


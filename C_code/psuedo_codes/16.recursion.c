/* 
Stack Overflow: It happens when a program uses more space in its call stack than is available. 
                The call stack stores function calls and local variables. 
                If too many function calls occur, or if each function uses a lot of memory, 
                it can exceed the stack's size, causing a crash.

return num * factorial(--num);. In C, the order of evaluation of function parameters is not defined. 
This means that when you call factorial(--num), it's not guaranteed whether num will be decremented 
before being used as an argument in the factorial function call.
*/
// no terminating condition is given then runtime error stack overflow in case of loop its infinite loop
#include<stdio.h>

// int factorial(int num){
//     if (num == 1 || num == 0) //factorial of 0 and 1 is 1
//         return 1;
//     else{
//         return num * factorial(num-1); //Don't use num--
//     }
// }

// int main(){
//     int n;
//     printf("Enter Number to get factorial: ");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("Factorial of %d is %d",n,fact);
// }
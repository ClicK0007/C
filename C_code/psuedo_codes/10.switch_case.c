// Duplicated cases are not allowed
// Only integer constants and char are allowed in cases
// cases can be in any order and default case can also be any order but it will executes at last only if no match found

// int A=5, B=10;
// switch (A+B) // These is allowed

// int B=10;
// float A=15;
// switch (A+B) // These is not allowed as A+B will not be integer constant

// int B=10;
// float A=15;
// switch ((int)A+B) //Valid

// case 3+2: //valid
// case (int)5.1: //valid
// case 3.2+1: //invalid

// int A=5, B=10;
// switch (A+B) // These is allowed
// case A: //Invalid
// case A+B: //Invalid

// macros are allowed
// #define a 10
// #define b 11
// case a: //valid because a is macro

#include <stdio.h>

// int main() {
//     int num = 4;

//     switch (num) {
//         default:
//         printf("This is the default case.\n");

//         case 4:
//         printf("This is case 4.\n");

//         case 2:
//         printf("This is case 2.\n");
//         break;

//         case 6:
//         printf("This is case 6.\n");
//         break;
//     }

//     return 0;
// }
// Output = This is case 4.
//          This is case 2.



// int main() {
//     int num = 4;

//     switch (num) {
//         default:
//         printf("This is the default case.\n");

//         case 1:
//         printf("This is case 1.\n");
//         break;

//         case 2:
//         printf("This is case 2.\n");
//         break;

//         case 3:
//         printf("This is case 3.\n");
//         break;
//     }

//     return 0;
// }
// Output
// This is the default case.
// This is case 1.
// as there is no case 4 so default case is executed and there is no break statement so afterward case is also executed



// int main(void)
// {
//     int k = 1;
//     switch (k++)
//     {
//     default:
//         printf("0");
//     case 1:
//         printf("1");
//     case 2:
//         printf("2");
//     case 3 * 0:
//         printf("3");
//     }
//     return 0;
// }
// Output: 123



// int main(void)
// {
//     int k = 1;
//     switch (++k)
//     {
//     default:
//         printf("0");
//     case 1:
//         printf("1");
//     case 2:
//         printf("2");
//     case 3 * 0:
//         printf("3");
//     }
//     return 0;
// }
// Output: 23



// int main(void)
// {
//     int k = 1;
//     switch (k++)
//     {
//     default:
//         printf("0");
//     case 1: case 2:
//         printf("2");
//     case 3 * 0:
//         printf("1");
//     }
//     return 0;
// }
// Output: 21



// int main(void)
// {
//     int month;
//     printf("\n enter month number");
//     scanf("%d",&month);

//     switch(month)
//     {
//         case 1 ://jan
//         case 3: //march
//         case 5: //may
//         case 7: //july
//         case 8: //august
//         case 10: //october
//         case 12: //dec
//             printf("Month is having 31 days \n");
//         break;

//         case 2:
//             printf("Month is having 28/29 days \n");
//         break;

//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             printf("Month is having 30 Days \n");
//         break;

//         default:
//         printf("\n Month number does not match \n");
//         break;
//     }
//     return 0;
// }



// int main(void)
// {
//     int num;
//     printf("\n Enter Num ");
//     scanf("%d",&num);
//     switch(num)
//     {
//         case 1+1: //case 2:
//         printf("inside case 1+1 \n");
//         break;

//         default:
//         printf(" Case does not match \n ");
//         break;
//     }
//     return 0;
// }



// int main(void)
// {
//     int choice;
//     int val;
//     char ch;
//     printf("Enter Value ");
//     scanf("%d",&val);
//     switch(val)
//     {
//         case 'A': //case 65:
//             printf(" Inside Case A Block \n");
//         break;

//         case 'a': //case 97:
//             printf(" Inside Case a Block \n");
//         break;

//         default:
//         printf("case does not match \n");
//         break;

//     }
//     return 0;
// }



// int main() {
//     int x = 1, y = 2;

//     switch (x) {
//         case 1:
//             switch (y) {
//                 case 2:
//                     printf("Nested switch case: x is 1 and y is 2\n");
//                     break;
//                 case 3:
//                     printf("Nested switch case: x is 1 and y is 3\n");
//                     break;
//                 default:
//                     printf("Nested switch case: Unknown value for y\n");
//                     break;
//             }
//             break;
//         case 2:
//             printf("Nested switch case: x is 2\n");
//             break;
//         default:
//             printf("Nested switch case: Unknown value for x\n");
//             break;
//     }
//     return 0;
// }



// #define a 10  b 11 //invalid declaration for multiple variables

// #define a 10 //valid declaration for multiple variables
// #define b 11

// macro has to be defined in one line only
// macros value cannot be modified it's a text replacement u have modify in #define only
// --------------------------------------------------------------------------------------------------

#include <stdio.h>


// #define PI 3.14 //macro definition part
// #define macroname macrodefinition(replaceable text)
// int main(void)
// {
//     printf("%f",PI); //3.14000
//     return 0;
// }



// #define Sqr(a) (a*a)
// int main(void)
// {
//     int a=3;
//     printf("%d",Sqr(3)); // (3*3) = 9
//     printf("\n%d",Sqr(3+2)); // (3+2*3+2) = 3+6+2 = 11
//     return 0;
// }



// #define square(x) x*x // 5+1 * 5+1 =11
// int main(){
//     int i = square(5+1); 
//     printf("%d",i); //11
// }
/*
When the macro square(x) is expanded, the expression 5 + 1 * 5 + 1 is generated. According to the precedence rules in C, 
multiplication and addition have the same precedence and are left-to-right associative, so the expression is evaluated as 
5 + (1 * 5) + 1 which results in 5 + 5 + 1 which equals 11.
Therefore, the value printed would be 11, not 36. To avoid such issues, it's better to enclose macro arguments in parentheses 
within the macro definition to ensure the correct evaluation, like this:
#define square(x) (x)*(x)
*/


// # include <stdio.h>
// # define scanf "%s Geeks For Geeks "
// main()
// {
// printf(scanf, scanf);
// getchar();
// return 0;
// }
//Output: %s Geeks For Geeks Geeks For Geeks 



// #define SWAP(a,b) {int temp; temp=a; a=b; b=temp;} 
// int main(void)
// {
//     int n1=10,n2=5;
//     printf("\n Before Macro Call : N1=%d N2=%d",n1,n2);
//     SWAP(n1,n2);
//     printf("\n After Macro Call : N1=%d N2=%d \n",n1,n2);
//     return 0;
// }
// #define SWAP(type,a,b) {type temp; temp=a; a=b; b=temp;}  //for different types of datatypes
//SWAP(int,n1,n2) //these will be function call



// #define STRDISP(x) {printf("\n %s",#x);}       //# indicates string
// int main(void)
// {
//     STRDISP("sunbeam"); // "sunbeam"    //{printf("\n %s","\"sunbeam\"");}
//     STRDISP(pune); // pune

//     int num = 10;
//     char str[] = "Hello";

//     STRDISP(num); // o/p - num   // This will be replaced by printf("\n%s", "num");
//     STRDISP(str); // o/p - str   //This will be replaced by printf("\n%s", "str");

//     return 0;
// }
//#x within the macro STRDISP(x) will stringify whatever x is passed into the macro.



// #define STRDISP(x) {printf("\n %s",#x);} //sunbeam
// #define STRDISP(x) {printf("\n %s",#x+0);} //sunbeam // base_address + 0 = 0+0 =0
// #define STRDISP(x) {printf("\n %s",#x+1);} //unbeam  // address + 1 = 0+1 = 1 // 1 character will skip
// #define STRDISP(x) {printf("\n %s",#x+2);} //nbeam
// #define STRDISP(x) {printf("\n %s",#x+2+2);} //eam
// #define STRDISP(x) {printf("\n %s",#x+8);} // undefined behavior.// out of bound 
// #define STRDISP(x) {printf("\n %s",#x+3);} //beam
// int main(void)
// {
//     STRDISP(sunbeam);    
//     return 0;
// }




// #define STRDISP(x) { printf("\n %c", (x)[6]); } //m
// int main(void)
// {
//     // STRDISP(sunbeam); //error: ‘sunbeam’ undeclared //while accessing through array indexing it gives error
//     STRDISP("sunbeam") //m // element at index 6
//     return 0;
// }



// #define test(a,b) a##b            // ## indicates concatination operation
// int main(void)
// {
//     char abcd = 'v';
//     printf("%c",test(a,bcd)); // v
//     return 0;
// }



// #define test(a,b) a##b
//## indicates concatination operation

// int main(void)
// {
//     int a =1, b =2; //unused values //it is not defined then also okay
//     int ab=400; // ab has to defined or error because test will return ab then print ab
//     printf("%d",test(a,b)); //400  //return value = ab
//  these is treated as  printf("%d",ab); //400 //concatination
//     return 0;
// }



// #define PI 3.14
// int main(void)
// {
//     #if defined(PI)
//         printf("PI is defined \n");
//     #else
//         printf("PI is not defined \n");
//     #endif
//     return 0;
// }
// o/p- PI is defined




// #define PI 3.14
// int main(void)
// {
//     #if defined(PI)
//         printf("PI is defined \n"); //these will print
//     #else
//         printf("PI is not defined \n");
//     #endif

//     #undef PI //please undefine the PI value

//     #if defined(PI)
//     printf("\n PI is defined \n");
//     #else
//     printf("\n PI is not defined \n"); // these will print
//     #endif

//     return 0;
// }



// int main(void)
// {
   
//     printf("%d",__LINE__);      // line no. 
//     printf("%s",__FILE__);      // file name
//     printf("%s",__TIME__);      // time
//     printf("\n %s\n ",__DATE__);// date
    
//     return 0;
// }



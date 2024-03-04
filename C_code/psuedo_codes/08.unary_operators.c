/*Pre
evaluation
assignment
post
*/

#include<stdio.h>


// printf("%d", ++(a+b)); //compile time error - l-value required
// These will give error 
// as unary operator does not work with constants and expression

// int main(void)
// {
//     int num=20;
//     int a;
//     printf("\n Num=%d ",num);
//     a=++num; //PreOperation
    //first operation is performed then value is assigned
//     printf("\n Num=%d a=%d",num,a);  //21 21
//     return 0;
// }

// int main(void)
// {
//     int num=20;
//     int a;
//     printf("Num=%d",num);
//     a=num++; //20++ 
    //Post operation
//    printf("\n Num=%d a=%d \n",num,a);   //21 20
    //++  increment the value by 1
    //-- decrement the value by 1

    //num++ //post increment
    //++num // pre increment
    //num-- //post decrement
    //--num // pre decrement
    
//     return 0;
// }

// int main(){
//     int a = 10;
//     int result = a++;
//     printf("%d %d",a,result); //o/p - 11 10
// }

// int main(){
//     int i = 4;
//     printf("%d %d %d ",++i,i ,i++); //6 5 4 //right to left
//     ++5 so 6 will print,  5 , 4 will print then ++ 
// }
//if these type of question is asked then if there is option of compiler dependent then go with it
// because these type of question is compiler dependent
// if not then evaluate from right to left



// _____________________COMPILER DEPENDENT___________________________
// int main(){
//     int a = 2, b;
//     b = a++ + a-- + ++a + --a; // left to right //  a++ + a-- + ++a + --a
                                                //      2 then++ so 3    +  3 then-- so 2   +  ++2 so 3  +  --3 so 2  //2+3+3+2 = 10
//     printf("%d %d",a, b); //2 10
// }
// In VS Code it is calculated as these 
// But the standard way is to do pre so ++a and --a so a value becomes 2 
//then substitution - substitute a value everywhere 
// 2 + 2 + 2 + 2 = 8
// then assignment 
// b = 8
// then post a++ a-- so a value = 2


// int main(){
//     int a=4, b=3,res;
//     res = a++ + ++a + --b;  // 4 then++ so 5   +    ++5 so 6    +    --3 so 2    //5+6+2=12
//     printf("%d %d %d ",a, b, res);
// }
// in these type of question first check option for a and b values because they are easy to evaluate
/*
1. Form basic equation
2. Perform pre operations, put the updated values in expression
3. Perform post operations

res = a++ + ++a + --b;
step1: 
res = a + a + b  ====> Basic equation

step2: Pre operations
a = 5
b = 2
res = a + a + b
res = 5 + 5 + 2 =12

step3:
Perform post operations
(a++)
a = 6
*/

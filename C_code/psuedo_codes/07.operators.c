
// * logical || operator first check first expression if its 1 then it will not go to 2nd expression ******
// *same with logical && operator first expression is true then only it goes to 2nd expression

// any value other than 0 is treated as 1

// 3.52%2 will produce compile time error as in C for modulo operator both operator has to int

#include<stdio.h>

// int main(void)
// {
//     int a = 5, b=3;
//     int result;
//     result = a && b;  //1 because non zero value
//     printf("\n Result = %d \n",!result);  //0

//     return 0;
// }


// int main(void)
// {
//     int a=0,b=3,c=-1,d;
//     printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);
//     d = a++ || (++b && c++);
     
//     printf("\n A=%d B=%d C=%d D=%d \n",a,b,c,d); //1 4 0 1

//     return 0;
// } 



// int main(void)
// {
//     int a=-10,b=3,c=0,d;
//     printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);
//     d= a++ || (++b && c++);
// ********logical || operator first check first expression if its 1 then it will not go to 2nd expression ******
    //(exp1) || (expr2)
    // a++   || (expr2)
    // -10++ || (expr2)
    //  -9   || (expr2)
    //   1   || (expr2)
    //d=1 
    // expression 2 is untouched so b and c value will not changed


//     printf("\n A=%d B=%d C=%d D=%d \n",a,b,c,d); // A=-9 B=3 C=0 D=1

//     return 0;
// }


// int main(void)
// {
//     printf("\n num1 < num2 = %d \n",5<10);         //1
    //relational operators ( < , > ,<= , >= , ==)
    //True  :  1
    //False :  0

//     printf("\n num1 > num2 = %d \n",5>5);         //0

//     printf("\n num1 <= num2 = %d \n",5<=5);       //1

//     printf("\n num1 >= num2 = %d \n",5>=10);      //0

//     printf("\n num1 == num2 = %d \n",5==5);       //1

//     printf("\n num1 != num2 = %d \n",5!=5);       //0
//     return 0;
// }


// ===============================***************************=========================*******************



//Bitwise Operators
//AND (&) OR( | ) XOR (^) Complement (~) LeftShift(<<) Right Shift (>>)

/*
for complement ~   -(n+1)

Short cut Formula LEFT SHIFT OPERATIONS for both +ve and -ve numbers
x<< n = x * 2^n
30<<2 = 30 * 2^2 = 30 * 4 = 120
-20<<3 = -20 * 2^3 = -20 * 8 = -160

Short cut Formula RIGHT SHIFT OPERATIONS for both +ve and -ve numbers
x>>n = x / 2^n
40 >> 3 = 40 / 2^3 = 40 / 8 = 5 
-30 >> 3 = -30 / 2^3 = -30/ 8 = -3.75 is equivalent to -4
*/

#include<stdio.h>

//AND OR XOR

// int main(void)
// {
//     int x=12;
//     int y=10;

    //12 === >     1 1 0 0                                8 4 2 1 = 2^3 2^2 2^1 2^0
    //10 === >     1 0 1 0
    //---------------------------
    //12 & 10      1 0 0 0  ====> 8 in decimal


//     printf("x&y = %d \n",x&y); //8

//     printf("\n x|y = %d \n",x|y); //14

    //12 === >     1 1 0 0
    //10 === >     1 0 1 0
    //---------------------------
    //12 | 10      1 1 1 0  ====> 14 in decimal


//      printf("\n x^y = %d \n",x^y); //6

    //12 === >     1 1 0 0             //similar bits 0 dissimilar bits 1
    //10 === >     1 0 1 0
    //---------------------------
    //12 ^ 10      0 1 1 0  ====> 6 in decimal

//     return 0;
// }

//COMPLIMENT ~
// int main(void)
// {
//     int x=35; // -(n+1) //-(35+1)   //-36
//     int y=-35; // -(-35+1) // -(-34) //34
//     printf("\n ~x : %d ~y: %d \n",~x,~y);

//     return 0;
// }

//LEFT SHIFT RIGHT SHIFT
// int main(void)
// {
//     int a=-30;
//     printf("a>>3 : %d \n",a>>3);     //-30/8=-3.75=-4
//     return 0;
// }

// int main(void)
// {
//     int a=40;
//     printf("a>>3 : %d \n",a>>3); // 40/8  = 5
//     return 0;
// }



// int main(void)
// {
//     int a=-20;
//     printf("a<<3 : %d \n",a<<3); // -20 * 3 = -160
//     return 0;
// }


// int main(void)
// {
//     int a=30;
//     printf("a << 2 : %d \n",a<<2); // 30 * 4 = 120
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

// int main(void)
// {
//     char ch1=200 ; //signed 
//     char ch2=58; //signed
//     printf("%d \n",ch1); //signed range -128 to 127. 200-256=-56 o/p=-56
//     printf("%d \n",ch2); //58
//     unsigned char ch3;
//     ch3=ch1+ch2; //258 but range is 0 to 255 so 0=256 1=257 2=258
//     printf("%d \n",ch3); //o/p = 2
//     return 0;
// }

// 200 + 58 = 258
// unsigned range is from 0 to 255
// 256 represented as 0
// 257 represented as 1
// 258 represented as 2


// int main(void)
// {
//     unsigned char ch=257;
//     255 last number on scale of unsigned char
//     256   ===>  0 
//     257   ====> 1
//     printf("\n %d \n",ch); // o/p = 1
//     return 0;
// }


// int main(void)
// {
    //char ch=122;//by default each character is signed character
//     char ch=130;
    //128 ===>  -128
    //129 ===> -127
    //130 ===> -126
//     printf("\n %d \n",ch);
//     return 0;
// }

// {
    //printf("\n %d %d \n",INT_MIN,INT_MAX);
    //-2147483648 2147483647

//     int num= 2147483649;
//     printf("Num = %d \n",num); //Num = -2147483647 
//     return 0;
// }
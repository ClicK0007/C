#include<stdio.h>
#include<stdlib.h>

//ASCII - American Standard Code for Information Interchange
// A-Z -------> 65-90
// a-z -------> 97-122
// 0-9 -------> 48-57

// %zu for sizeof()
// %p for address

// typecasting leads to flooring
// int x = (int)3.75; // x will be 3

// int main(void)
// {
//     int d=30; // d is a variable name (int) ==> %d format specifier
//     float f=50.4; // f  is a variable name (float) ===> %f Format specifier
//     printf("d=%d ",d);
//     printf("\n f=%f",f);
//     return 0;
// }


// int main(void)
// {
//     char ch='a';
   // printf("%d",ch); //'a' its ascii value is 97
//     printf("\n Ch = %c Ascii value of ch=%d",ch,ch);
//     return 0;
// }


// ------------------------------octal hexa decimal---------------------------------------------------

// int main(void)
// {
//    int num=0100; //octal number - number preceding with 0
//     int val=0x50; //hexa decimal number - number preceding with 0x
    

   //  printf("num=%d num=%o num=%x",num,num,num);  //decimal,octal,hexadecimal
//     printf("\n val=%d val=%o val=%x",val,val,val);
//     return 0;
// }



// --------------------------TYPEDEF------------------------------
//typedef

// int main(void)
// {
    //nick name / another name / alias name to existing data type 
    //typedef 

//     typedef int number;
    //typedef existing_datatype_name newname/nickname;

//     int val=20; //val is a variable of type int (real name of datatype)

//     number n1=30; // n1 is a variable of type int (but given another name number)
    //n1 is created by using nick name

//     printf("\n Val = %d ",val);
//     printf("\n N1=%d \n",n1);

// }
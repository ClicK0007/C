// sizeof enum is always 4 as we can access element one at a time
// floating values is not allowed as enum is user-defined datatype used to define integral constants to names
// enum can be declared in main function also but normally its declared in globally
#include<stdio.h>

// enum colors{RED,GREEN,BLUE=7,Orange,black=6,white};
// int main(void)
// {
//     printf("Red : %d",RED);//as no value is assigned then it will assigned with 0
//     printf("\n Green : %d",GREEN); 
//     printf("\n Blue : %d ",BLUE);
//     printf("\n Orange : %d ",Orange); //Blue has value of 7 so after wards values will assigned from 7 that's why 8
//     printf("\n black : %d ",black);
//     printf("\n white : %d ",white); //same value can be assigned to enum but it will creates confusion
//     return 0;
// }
/*
o/p:
Red : 0
 Green : 1
 Blue : 7 
 Orange : 8 
 black : 6 
 white : 7 
*/

// enum colors{RED=5,GREEN=10,BLUE};
// int main(void)
// {
//     enum colors clr; //clr is called as enum variable of type enum colors

//     clr=RED; // RED element of enum is accessed through enum variable
//     printf("\n value of clr = %d",clr);

//     clr=GREEN;
//     printf("\n value of clr = %d",clr);

//     clr=BLUE;
//     printf("\n value of clr = %d \n",clr);

//     return 0;
// }
/*
o/p:
 value of clr = 5
 value of clr = 10
 value of clr = 11 
*/

// enum colors{RED=-1,GREEN,BLUE};
// int main(void)
// {   
//     enum colors clr;
//     enum colors color;
//     clr = RED,GREEN,BLUE; 
//     printf("clr = %d",clr); // -1
//     printf("\n Sizeof Enum = %ld \n",sizeof(enum colors)); //o/p- 4 - because we can only access enum one at a time
//     printf("\n Sizeof Enum = %ld \n",sizeof(clr)); // 4
//     printf("\n Sizeof Enum = %ld \n",sizeof(color)); //4

//     return 0;
// }



// typedef enum department{TCT,ADMIN,SECURITY,PLACEMENT} DEPT;
//department is real name of enum
//DEPT is nick name given to enum
// int main(void)
// {
//     enum department dpt_real;//dpt_real is a variable name created by using real name
//     DEPT dpt_nick_name;
    //dpt_nick_name is a variable name of type enum DEPT 
    //by using its nick name

//     dpt_real=TCT;
//     printf("\n dpt_real= %d ",dpt_real); // 0
//     dpt_nick_name=0; //assigned with TCT not gives error (jff)
//     printf("\n dpt_nick_name= %d \n",dpt_nick_name); // 0

//     return 0;
// }



// enum{MON,TUE,WED,THUR,FRI}; //anonymous enum
// int main(void)
// {
//     printf("\n Mon =%d \n",MON);//o/p-0 - Elements can be directly accessed if anonymous enum
//     return 0;
// }

// typedef enum{MON,TUE,WED,THUR,FRI}DAYS; //nick name given to anonymous enum
// int main(void)
// {
//     printf("\n Mon =%d \n",MON);//allowed
//     DAYS d;//d is a variable of type enum having nick name DAYS
//     // d++ = TUE; //error - lvalue required
//     d= TUE;
//     d++; //allowed
//     printf("\n Days d  = %d",d); // 2
//     return 0;
// }



// enum Menu{EXIT,ADD,SUB,MUL,DIV}; //0.EXIT 1.ADD 2.SUB 3.MUL 4.DIV
// int main(void)
// {
//     int num1,num2;
//     enum Menu choice; 
//     printf("\n Enter First number");
//     scanf("%d",&num1);
//     printf("\n Enter Second number");
//     scanf("%d",&num2);
//     do
//     {
//         printf("\n Enter Choice 0.EXIT 1.ADD 2.SUB 3.MUL 4.DIV");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case ADD:   //as ADD is enum so it allowed
//                 printf("\n Addition = %d \n",num1+num2);
//             break;

//             case SUB:
//                 printf("\n Subtraction = %d \n",num1-num2);
//             break;

//             case MUL:
//                 printf("\n Multiplication = %d \n",num1*num2);
//             break;

//             case DIV:
//                 printf("\n Division = %d \n",num1/num2);
//             break;
//         }
//     } while (choice!=EXIT);
// }
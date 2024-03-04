/*
Four basics types of errors:
- Compile time erro
- Runtime error
- linker error
- logical error
*/

#include<stdio.h>
#include<stdlib.h>

// int main(void)
// {
//     int num1,num2;

//     printf("\n Enter num1 value : ");
//     scanf("%d",&num1);
//     printf("\n Enter num1 value : ");
//     scanf("%d",&num2);
//     printf("Num1 = %d Num2=%d",num1,num2)
    //expecting ; before printf
    //wrong syntax (compilation phase) / Compile Time Error 
//     return 0;
    
// }


// int main(void)
// {
//     printf("%d %d \n",INT_MIN,INT_MAX); //linking error because limits.h is not included
//     return 0;
// }



// int main(void)
// {
//     int num1,num2;

//     printf("\n Enter num1 value : ");
//     scanf("%d",&num1);
//     printf("\n Enter num2 value : ");
//     scanf("%d",&num2);

//     printf("%d \n ", num1/num2);
    
//     in above case if user enters num2 = 0 then 
//     Error : Floating point exception (core dumped)
//     Run time Error

//     Run time error can also occur if user have not developed correct logic
//     inside the program (logical error)
//     return 0;
// }
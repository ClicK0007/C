// right to left in printf
// Example : printf("printf: %d\n", printf("a=%d", 42)); //first right will execute

#include<stdio.h>
#include<stdlib.h>

// int main(void)
// {
//     int a=1,2,3; //error as it treated as int a=1,int 2,int 3;
//     int a;
//     a=1,2,3;
//     printf("A Value =%d ",a);  //output will be 1 as comma operator has the least precedence in all operator
//     return 0;                  // so the expression becomes (a=1),2,3; as assignment operator has highest precedence
// }


// int main(void)
// {
//     int a=(11,42,31);
//     printf("A=%d",a);          //output = 31
//     return 0;
// }


// int main(void)
// {
//     int a=(1,2,3);
//     //a=3
//     int b=(++a,++a,++a); //    (4,5,6) b= 6
//     int c=(b++,b++,b++); // (6,7,8) // b = 9 //c=8

//     printf("\n %d %d %d",a,b,c); // 6 9 8
//     return 0;
// }



// int main (){
//     int a = (printf("These will NOT be ignored"),5);
//     printf("%d",a); //o/p - These will NOT be ignored5
// }

// int main(void)
// {
//     int var,num;
//     num = (var = 10,var + 20); 
//     printf("%d",num); //o/p: 30
//     return 0;
// }

// int main(void)
// {
//     int i;
//     i=printf("hello \t");
    // printf() returns how many number of characters it has written on the console/ output screen
//     printf("%d",i);
//     return 0;
// }
// output= hello____7
//        7 (_ and \t will also consider with hello so 5+2 = 7)
// **** \t consider as one character only.



//      int a;
//     a=printf("hello"),2,printf("world"); //as these statement is evaluated but not assigned
//     printf("%d ",a);   //o/p: helloworld5



// int main(void)
// {
//     int i;
//     i=printf("hello \n");
    //printf() returns how many number of characters it has written on the console/ output screen
//     printf("%d",i);
//     return 0;
// }
//output= hello 
//        7 (_ and \n will also consider with hello so 5+2 = 7)


// int main()
// {
//      int i = 10;
//      i=printf("%d",100); //100
//     printf(" %d",i); //3
//      return 0;
// }
// output = 100 3


// int main() {
//     printf("printf: %d\n", printf("a=%d", 42)); //first right will execute
//     return 0;
// }
//output-  a=42printf: 4



// int main(void)
// {
//     int num=600;
//     int val;
//     val=printf("%8d",num);//printf is writing 8 spaces on console %8d
    // _____600
//     printf("\n Val= %d",val);
    // 8
//     return 0;
// }



// int main(void)
// {
//     float f_val1=70.65;
//     float f_val2=80.686;
//     printf("%f %f \n",f_val1,f_val2);
    //70.650002 80.685997
//     printf("%8.1f %7.2f",f_val1,f_val2);
    //8.1 specifies... 8 spaces width and .1 indicates after decimal one digit to be displayed
    // ____70.7 last value round off to higher value if last digit is 5 and above
    // __80.69
//     printf("\n %-8.1f %-7.2f",f_val1,f_val2);
    // 70.7____ 80.69___
//     return 0;
// }


// int main(void)
// {
//     int num1=40;
//     int num2=500;
//     int num3=7000;

//     printf("\n%6d %6d %6d",num1,num2,num3);
    //  ____40 ___500 __7000

//     printf("\n%-6d %-6d %-6d",num1,num2,num3);
    // 40____ 500___ 7000__
    // - is considers as 1 char

//     printf("%08d\n",num2); //00000500
//     return 0;
// }

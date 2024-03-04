/*
argc (argument count) is an integer that represents the number of command-line arguments passed to the program, including the name of the program itself.
argv (argument vector) is an array of strings (char *argv[]) where each element is a pointer to a string representing a command-line argument. argv[0] usually holds the name of the program.
*/

#include <stdio.h>
#include <stdlib.h>

// int main(int argc,char *argv[])
// {
//     int i;
//     printf("Argument count = %d \n ",argc); // Argument count = 1

//     for(i=0;i<argc;i++)
//     {
//         printf("argv[%d]=%s \n",i,argv[i]); // argv[0]=/tmp/21.cmd_line //which is command to execute the program
//     }
//     return 0;
// }

// int main(int argc,char *argv[],char *env[])
// {
//     int i;
//     for(i=0;i<30;i++)
//     {
//         printf("env[%d]=%s \n",i,env[i]);
//     }
//     return 0;
// }
/*
The env array in the main() function is used to access the environment variables passed to the C program.
However, accessing environment variables doesn't necessarily mean there will always be 30 environment variables available.
The number of environment variables can vary depending on the system and the configuration.
*/

// int main(int argc, char *argv[])
// {
//     int i;
//     int sum = 0;
//     for (i = 1; i < argc; i++) // loop start form 1 because 1st argument is cmd to run the file
//          sum=sum+atoi(argv[i]);
        // sum = sum + (int)(argv[i]); // These will give warning and gives random value
        // argv is in string
        // string to int (atoi)
        // 0+20===>sum ===> 20
        // sum+argv[2] ==> 20+10 ==>30==>sum
//     printf("\n Sum = %d", sum);
//     return 0;
// }
// gcc 21.cmd_line.c
//./a.out 10 20
// o/p - 30
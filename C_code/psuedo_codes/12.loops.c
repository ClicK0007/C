// if comma operator is used then only right side condition will be evaluated
//  break will move out of the current loop

#include <stdio.h>

// int main(void)
// {
//     int i;
//     for(i=0;i<=3;i++);
//     printf("%5d",i);
//     return 0;
// }
// O/p: 4 as there is semicolon after for loop

// int main(void)
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// o/p: only four times observe inner loop condition
/*
*
**
***
****

*/

// int main()
// {
//     int x=10,y=5,ans;
//     while(y-->=1,x-->=1) //if comma operator is used then only right side condition will be checked
//     {
//         if(y==0)
//             break;
//         ans=x/y;
//         printf("%d / %d =%d \n",x,y,ans);
//     }
//     printf("\n Out of while loop \n");
//     return 0;
// }
/*
o/p:
9 / 4 =2
8 / 3 =2
7 / 2 =3
6 / 1 =6

 Out of while loop

*/

// int main(void)
// {
//     int x=10,y=5,ans;
//     while(y-->=1,x-->=1)
//     {
//         if(y==0)
//             continue;
//         ans=x/y;
//         printf("%d / %d =%d \n",x,y,ans);
//     }
//     printf("\n Out of while loop \n");
//     return 0;
// }
/*
o/p:
9 / 4 =2
8 / 3 =2
7 / 2 =3
6 / 1 =6 //because of continue 5 is skipped
4 / -1 =-4
3 / -2 =-1
2 / -3 =0
1 / -4 =0
0 / -5 =0

 Out of while loop
*/

// int main(void)
// {
//     int c = 5, no = 10;
//     do
//     {
//         no /= c;  //Dividing by 0
//     } while (c--);
//     printf("%d", no); // Error: Floating point exception (core dumped)
//     return 0;
// }
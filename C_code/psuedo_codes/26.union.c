// sizeof() will give Highest datatype value
// everything is same as structure but in union there is shared memory and in structure every data member has different memory

#include<stdio.h>
#include<stdlib.h>


// union student //name of union
// {
//     int grade; //data member
//     int percentage; // data member
// };

// int main(void)
// {
//     union student st;//st is variable of type union
//     printf("size= %zu ",sizeof(st));

//     st.grade=10; // 10 is stored
//     printf("Grade = %d ",st.grade);  // 10
//     st.percentage=15; // 10 will overwrite with 15
//     printf("Percentage = %d \n",st.percentage);  // 15

//     return 0;
// }






// union student //name of union
// {
//     int grade; //data member
//     int percentage; // data member
// };

// int main(void)
// {
//     union student st;//st is variable of type union
//     printf("size= %zu ",sizeof(st)); // 4

//     st.grade=10;
//     st.percentage=15;
//     printf("Grade = %d ",st.grade); // 15
//     printf("Percentage = %d \n",st.percentage); // 15

//     return 0;
// }




// ---------------------------- Structure and Union ----------------------------

// struct
// {
    // largest element long = 8 bytes so in multiples of 8
//     short int s[5]; //2bytes (5 elements) //2*5 =10 bytes
    //10 bytes = 8 bytes + 8 bytes = 16 bytes 

//     union //8bytes
//     {
//       char x;
//       float y;
//       long z; 
//     }u;
    
// }t; 

// int main(void)
// {
//     printf("sizeof(t)= %zu \n",sizeof(t)); // 24
//     printf("sizeof(t.u)= %zu \n ",sizeof(t.u)); // 8
//     return 0;
// }





// union  test
// {
//   int num;
//   char ch;
// }t;

// int main(void)
// {
//   printf("\n Size= %zu \n ",sizeof(t)); // 4
//   t.num=256;
//   printf("num = %d",t.num);  // 256
//   t.ch='A';
//   printf("ch = %c \n",t.ch); // A
  

//   return 0;
// }


// observe output and LEAVE
union  test    
{
  int n;
  int num;
  char ch;
}t;
int main(void)
{
  t.num=255; //for 0-255 it will give ascii value of A 
  t.n = 256; //as value will be overwritten so some undefined value
  t.ch='A';
  printf("\n Ch = %c",t.ch); // A
  printf("\n num=%d \n",t.n); // 65 + 256 +  = 321
  printf("\n num=%d \n",t.num); // 321   

  t.num=255; // 255 
  t.n = 259; // 259
  t.ch='B';
  printf("\n Ch = %c",t.ch); // B
  printf("\n num=%d \n",t.n); // 66 + 256 = 322
  printf("\n num=%d \n",t.num); // 322

  t.num=255; // 255 
  t.n = -1; // -1
  t.ch='B';
  printf("\n Ch = %c",t.ch); // B
  printf("\n num=%d \n",t.n); // 66 - 256 = -190
  printf("\n num=%d \n",t.num); // -190  

  t.n = 259; // 259
  t.num=255; // 255 
  t.ch='A';
  printf("\n Ch = %c",t.ch); // A
  printf("\n num=%d \n",t.n); // 65
  printf("\n num=%d \n",t.num); // 65 
  return 0;
} 
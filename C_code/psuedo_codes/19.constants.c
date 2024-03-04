/*
- const float PI=3.14; - values can be change using pointer (*PI)

- const float PI=3.14;
  const float *fptr = &PI;
   PI value can't be changed by *fptr
   *fptr value is constant by assigning fptr = &other_variable we can changed the value of *fptr 
    as it going to hold address of other variable

- const float PI=3.14;
  const float * const fptr=&PI; // no values can be changed 
    we can not perform: 
        1. Change the value inside pointer
        2. change the address location of pointer

- const float const *fptr=&PI; //These can change the values * should be before const
*/




#include<stdio.h>
#include<stdlib.h>

// int main(void)
// {
//     const float PI=3.14; //constant value
//     printf("PI = %f \n",PI);
//     //PI++; //error: increment of read-only variable ‘PI’
//     return 0;
// }




// int main(void)
// {
//     const float PI=3.14; //value is constant
//     float *fptr;
//     fptr = &PI;

//     printf("\n PI=%f *fptr=%f \n",PI,*fptr);
//     //PI++; //error: increment of read-only variable ‘PI’

//     *fptr=20.5;//through pointer variable we have changed constant value
//     printf("\n PI=%f *fptr=%f \n",PI,*fptr);
//     return 0;
// }




// int main(void)
// {
//     const float PI=3.14;
//     const float *fptr = &PI;
    // fptr=&PI;//pointer is pointing to constant value
//     printf("\n PI=%f *fptr=%f \n",PI,*fptr);
//     //PI++; //error: increment of read-only variable ‘PI’

//     //*fptr=5.15;//error: assignment of read-only location ‘*fptr’

//     float f_val=20.5;
//     fptr=&f_val;//pointer is pointing to non constant value
//     printf("\n f_val=%f *fptr=%f \n",f_val,*fptr);

//     f_val++;
//     //*fptr=70.6;//error: assignment of read-only location ‘*fptr’
//     printf("\n f_val=%f *fptr=%f \n",f_val,*fptr);
//     return 0;
// }




// int main(void)
// {
//     const float PI=3.14;
//     const float * const fptr=&PI;
//     printf("\n PI=%f *fptr=%f \n",PI,*fptr);
//     //PI++; //error: increment of read-only variable ‘PI’

//     //*fptr=5.15;//error: assignment of read-only location ‘*fptr’

//     float f_val=3.5;
//     fptr=&f_val; //error: assignment of read-only variable ‘fptr’
//     return 0;
// }



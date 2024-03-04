#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char ch='A';
    printf("Char value = %c ",ch);                             //char value = A 
    // printf("&ch = %u sizeof(ch)=%d",&ch,sizeof(ch));           //some random address, size of char = 1 
    return 0;
}


// int main(void)
// {
//   int val=50;
//    printf("Val = %d &val=%u",val,&val);
   //      Val = 50 &val=address
//    printf("\n sizeof(val)=%u sizeof(400)=%u sizeof(int)=%u",sizeof(val),sizeof(400),sizeof(int));
        //   sizeof(val)=4 sizeof(400)=4 sizeof(int)=4

//     return 0; 
// }


// int main(void)
// {
//     float f_val=6.3;
//     double d=60.7;

//     printf("f_val=%f &f_val=%u size(f_val)=%u",f_val,&f_val,sizeof(f_val)); 
    // f_val=6.300000 &f_val=6422300 size(f_val)=4

//     printf("\n sizeof(float)=%d sizeof(30.78)=%d",sizeof(float),sizeof(30.78));      
    // sizeof(float)=4 sizeof(30.78)=8 --> 30.78 is considered as double

//     printf("\n sizeof(30.78f)=%d",sizeof(30.78f));
    // sizeof(30.78f)=4

//     printf("\n d=%f &d=%u sizeof(d)=%d",d,&d,sizeof(d));
    // d=60.700000 &d=6422288 sizeof(d)=8

//     printf("\n sizeof(double)=%d",sizeof(double));
    // sizeof(double)=8

//     return 0;
// }

// int main(void)
// {
//     int i=30;
//     float f=20.67;
//     double d=70.43;
//     char ch='A';
//     printf("%d",sizeof(ch+i));
            // sizeof('A' + 30) ************************************************************************
            // sizeof(ch + 30)
            // sizeof(1byte+4byte)
            // sizeof(integernumber)
            // 4 = output
//             When an char and a int are involved in an operation, the char is typically promoted to a int.
//              The result of the addition operation (ch + i) will be a int.
//     printf("\n %d",sizeof(i+f)); //4
// When an int and a float are involved in an operation, the int is typically promoted to a float.
// The result of the addition operation (i + f) will be a float.
//     printf("\n %d",sizeof(i+f+ch)); //4
                     
//    printf("\n %d",sizeof(f+d)); //8
// When an float and a double are involved in an operation, the float is typically promoted to a double.
// The result of the addition operation (f + d) will be a double.
//     printf("\n %d",sizeof(8.56+f)); // doublevalue + float //decimal //double //8
//     printf("\n %d",sizeof(8.56f+f+i));  //4
//    printf("\n %d",(sizeof(d)+sizeof(f)));  
                // (8      +  4   )
                // 12
//     printf("\n %f",f+i);  //50.670000
//     return 0;
// }




// int main(void)
// {
//     char ch='A';
//     printf("\n Ch=%c Ch=%d sizeof(ch)=%d",ch,ch,sizeof(ch));
    //Ch=A Ch=65 sizeof(ch)=1

//     printf("\n sizeof(char)=%d",sizeof(char));
    //sizeof(char)=1

//     printf("\n sizeof('B')=%d",sizeof('B')); //output =4 *********************************************************
     //any hard coded value in size of will convert to integer
                                    //'B'
                                    //66          
                                  //integer number = 4 bytes
//     return 0;
// }

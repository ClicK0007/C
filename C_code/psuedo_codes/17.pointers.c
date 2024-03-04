// size of pointer is always fixed
// size of pointer for 32-bit system is 4 byte
// size of pointer for 64-bit system is 8 byte
// C does support pointer arithmetic, but it's limited to addition and subtraction of whole numbers to addresses.
// This allows you to move forward or backward along a contiguous block of memory, but not to scale addresses arbitrarily.
// Multiplication and division is not allowed on address.
// * means value at that address
// int* i, j; //only i is pointer
// int *i, *j; // Both i and j are pointers to integers


#include <stdio.h>

// int main(void)
// {
//     int num=50;
//     int *ptr; //declaration of pointer
//     ptr=&num;//storing address of num inside pointer
// pointer is holding address of num
// or int *ptr=&num;
//     printf("num = %d *ptr=%d",num,*ptr);          // num = 50 *ptr=50
//     printf("\n &num=%p ptr=%p ",&num,ptr);        // &num=0x7ffddca0993c ptr=0x7ffddca0993c
//     printf("\n &ptr=%p ",&ptr);                   // &ptr=0x7ffddca09940
//     printf("\n size of ptr = %zu \n",sizeof(ptr));// size of ptr = 8

//     num=100;
//     printf("\n after changing num value : num = %d *ptr=%d",num,*ptr); // num = 100 *ptr=100
//     *ptr=400; //indirect access of variable using pointer
//     printf("\n after changing *ptr value : num = %d *ptr=%d \n",num,*ptr); // num = 400 *ptr=400
//     return 0;
// }

// int main(void)
// {
//     int num1=40,num2=50;
//     int *ptr;

//     ptr=&num1;
//     printf("num1=%d *ptr=%d",num1,*ptr);    // num1=40 *ptr=40
//     printf("\n &num1=%p ptr=%p",&num1,ptr); // &num1=0x7fff64cfa108 ptr=0x7fff64cfa108

//     ptr=&num2;
//     printf("\n num2=%d *ptr=%d",num2,*ptr);   // num2=50 *ptr=50
//     printf("\n &num2=%p ptr=%p \n",&num2,ptr);// &num2=0x7fff64cfa10c ptr=0x7fff64cfa10c
//     return 0;
// }

// int main(void)
// {
//     int num=30;
//     int *ptr=&num;
//     int **pptr=&ptr;

//     printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr);  // Num=30 *ptr=30 **pptr=30
//     printf("\n &num = %p ptr=%p *pptr=%p ",&num,ptr,*pptr); // &num = 0x7ffcfb4e3b64 ptr=0x7ffcfb4e3b64 *pptr=0x7ffcfb4e3b64
//     printf("\n &ptr = %p pptr=%p ",&ptr,pptr);              // &ptr = 0x7ffcfb4e3b68 pptr=0x7ffcfb4e3b68

//     printf("\n &pptr= %p \n",&pptr);                        //  &pptr= 0x7ffcfb4e3b70

//     printf("\n size= %zu \n",sizeof(pptr));                 // size= 8
//     return 0;
// }

// int main(void)
// {
//     int num=30;
//     int *ptr=&num;
//     int **pptr=&ptr;

//     printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr); // Num=30 *ptr=30 **pptr=30

//     *ptr=50;
//     printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr); // Num=50 *ptr=50 **pptr=50

//     **pptr=990;
//     printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr); // Num=990 *ptr=990 **pptr=990

//     printf(" \n *&pptr  = %p &ptr = %p \n",*&pptr,&ptr); // *&pptr  = 0x7ffc1190bc08 &ptr = 0x7ffc1190bc08
//     return 0;
// }

// int main(void)
// {
//     int num=10;
//     char ch='A';
//     int *iptr = &num;
//     char *cptr=&ch;
//     printf("\n Num = %d *iptr=%d",num,*iptr);  // Num = 10 *iptr=10
//     printf("\n Ch = %c *cptr=%c \n",ch,*cptr); // Ch = A *cptr=A

//     printf("\n sizeof(cptr)=%zu sizeof(iptr)=%zu \n",sizeof(iptr),sizeof(cptr)); // sizeof(cptr)=8 sizeof(iptr)=8
//     return 0;
// }



// int main(void)
// {
//     char *cptr; // declaration of pointer //cptr is designed to hold the address of type character

//     int num=10;
//     cptr=&num;//assigning address of type int to character pointer
//     printf("Num=%d *cptr=%d \n",num,*cptr); // Num=10 *cptr=10
   /* while dereferencing it will only de-refer first byte of memory 
    
    Integer stores value in 32-bit (4byte)
    00000000 00000000 00000000 00001010 - compiler assigns 32 bits to integer pointer, so 10 is stored and prints "10"
    00000000 00000000 00000001 00000000 - compiler assigns 32 bits to integer pointer, so 256 is stored and prints "256"

    But Character stores value in 8-bit (1 byte)
                               00001010 - compiler assigns 8-bits to character pointer, so 10 is stored and prints "10"
                             1 00000000 - compiler assigns 8-bits to character pointer, But 256 needs minimum 9 bits to store
                                          So, Information will be lost.
                             1 00000010 - For 258, 2 will be print as in 8 bits only 2 (0000 0010) is represented      
    */
    
//     int val=256;
//     cptr=&val;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=256 *cptr=0 
//     val=258;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=258 *cptr=2 

//     val= 255;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=255 *cptr= -1 
//     val=254;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=254 *cptr= -2 

//     val= 128;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=128 *cptr= -128
//     val= 127;
//     printf("\n val=%d *cptr=%d \n",val,*cptr); // val=128 *cptr= 127 

//     return 0;
// }



// --------------------------------VOID POINTERS------------------------------------------------------------------------------

/*
Void pointers are generic pointers that can hold the address of any data type.
They offer flexibility when the specific data type isn't known or when a function needs to handle different 
data types through a single interface.
*/

// int main(void)
// {
//     int num=20;
//     char ch='A';

//     void *vptr=NULL;//void pointer
     //void *vptr; //generic pointer //no value is assigns 
//     vptr=&num;
//     printf("\n &num=%p vptr=%p ",&num,vptr);          // &num=0x7ffc63255afc vptr=0x7ffc63255afc 
//     printf("\n Num=%d *vptr=%d \n",num,*(int *)vptr); // Num=20 *vptr=20 
     // Typecasting is done to void pointer if its not done then it will give error
     // (int *) tells to convert void pointer into integer pointer

//     vptr=&ch;
//     printf("\n &ch=%p vptr=%p ",&ch,vptr);            // &ch=0x7ffc63255afb vptr=0x7ffc63255afb 
//     printf("\n ch=%c *vptr=%c \n",ch,*(char *)vptr);  // ch=A *vptr=A 
     // (char *) tells to convert void pointer into character pointer
     // these will use memory efficiently
//     return 0;
// }




/*
1) *++ptr : incr address in pointer, get the value at new address
2) ++*ptr : get the value of address in ptr, pre operation will increment the value
3) ptr++ : ptr+1 : address + 1 = address
    get the current pointer address and performs increment operation on address,
    by scale factor
4)  *ptr++ : similar to ptr+1 (case no.3)
5) (*ptr)++ : wherever pointer is pointing it will increment the value by on_exit
*/

// int main(void)
// {
//     int num=10; 
//     int *ptr=&num;
     /*
    The expression *ptr++; involves two operators: the dereference operator * and the increment operator ++. 
    The post-increment operator ++ has higher precedence than the dereference operator *. However, their associativity is from left to right.
    */
//     printf("\n &num=%p ptr=%p",&num,ptr); // &num=0x7ffd10f6da6c ptr=0x7ffd10f6da6c
//     //*ptr++; //address + 1 
//     (*ptr)++; //value is incremented wherever the pointer is pointing
//     printf("\n num=%d *ptr=%d \n",num,*ptr); // num=11 *ptr=11 

//     num=500;
//     printf("\n num=%d *ptr=%d \n",num,*ptr); // num=500 *ptr=500
//     *ptr=300;
//     printf("\n num=%d *ptr=%d \n",num,*ptr); // num=300 *ptr=300 

//     *ptr+=1; // *ptr=*ptr+1 
//     printf("\n num=%d *ptr=%d \n",num,*ptr); //  num=301 *ptr=301 

//     *ptr*=5; // *ptr= *ptr*5
//     printf("\n num=%d *ptr=%d \n",num,*ptr); // num=1505 *ptr=1505

//   return 0;
// }


// int main(void)
// {
//     int num=10;
//     int *ptr=&num;

//     printf("\n &num=%p ptr=%p",&num,ptr);    // &num=0x7ffd830ce7bc ptr=0x7ffd830ce7bc
//     ptr++;// ptr=ptr+1 address+1=address
//     printf("\n &num=%p ptr=%p \n",&num,ptr); // &num=0x7ffd830ce7bc ptr=0x7ffd830ce7c0

//     return 0;
// }



// int main(void)
// {
//     int num=10;
//     num++;
//     int *ptr=&num;
//     printf("\n Num = %d *ptr=%d",num,*ptr);  // Num = 11 *ptr=11
//     printf("\n &Num = %p ptr=%p ",&num,ptr); // &Num = 0x7ffce0e3a57c ptr=0x7ffce0e3a57c

//     ++*ptr; //Incremented value by one
//     printf("\n After ++*ptr: Num = %d *ptr=%d \n",num,*ptr); //After ++*ptr: Num = 12 *ptr=12 

//     *++ptr; // increment inside the address
//     printf("\n After *++ptr: Num = %d *ptr=%d \n",num,*ptr); // After *++ptr: Num = 12 *ptr=-521951872 // *ptr is garbage value because address got incremented and at that address garbage value is stored 
//     printf("\n After *++ptr : &Num = %p ptr=%p ",&num,ptr);  // After *++ptr : &Num = 0x7ffce0e3a57c ptr=0x7ffce0e3a580 

//     return 0;
// }


// --------------------------------------- CALL BY ADDRESS --------------------------------------------------------



//passing pointer variable as a argument to function

// void swap(int *num1,int *num2);
// int main(void)
// {
//     int n1,n2;
//     printf("\n Enter first value :  ");
//     scanf("%d",&n1);

//     printf("\n Enter Second value :  ");
//     scanf("%d",&n2);

//     printf("\n Before SWAP N1 =%d N2= %d",n1,n2);
//     swap(&n1,&n2); //call by reference
//     printf("\n After SWAP N1 =%d N2= %d",n1,n2);

//     return 0;
// }

// void swap(int *num1,int *num2)
// {
//     int temp;
//     temp=*num1; // as we need to change the value so *
//     *num1=*num2;
//     *num2=temp;
// }






//returning pointer variable from a function

// int* larger(int *x,int *y);
// int main(void)
// {
//     int n1,n2;
//     int *p;
//     printf("\n Enter first value :  ");
//     scanf("%d",&n1);

//     printf("\n Enter Second value :  ");
//     scanf("%d",&n2);

//     p=larger(&n1,&n2); // 3. p pointer will get address
//     printf("\n Larger Number is %d \n ",*p); // 4. *p will print the value 
//     return 0;
// }

// int* larger(int *x,int *y)  // 2. int* is a pointer storing address and returning to pointer p
// {
//     if(*x > *y)
//         return x;  // 1. x is address
//     else
//         return y;  // y is address
// }




// ---------------------------------Function Pointer ----------------------------------
//Pointer which holds the address of function pointer


// void (*fnptr)();//function pointer declaration

// void get();
// void disp();
// int main(void)
// {
//     //get();   
//     //disp();
//     printf("\n Address of get function = %p",get); 
//     printf("\n Address of disp function = %p \n",disp);

//     fnptr=get;
//     printf("Address of fnptr=%p \n",fnptr);
//     (*fnptr)();//call to get function using function pointer

//     fnptr=disp;
//     printf("Address of fnptr=%p \n",fnptr);
//     (*fnptr)();//call to disp function using function pointer
//     return 0;
// }

// void get()
// {
//     printf("inside get function \n");
// }

// void disp()
// {
//     printf("\n inside disp function \n");
// }


/*
 Address of disp function = 0x55b6491b7242 
Address of fnptr=0x55b6491b7228 
inside get function 
Address of fnptr=0x55b6491b7242 

 inside disp function 
*/





// void (*fnptr_get)(int);
// int (*fnptr_disp)();//function pointer declaration
 
// void get(int);
// int disp();
// int main(void)
// {
//     printf("\n Address of get function = %p",get); 
//     printf("\n Address of disp function = %p \n",disp);
//      int a = 1;
//     fnptr_get=get;
//     printf("Address of fnptr=%p \n",fnptr_get);
//     (*fnptr_get)(a);//call to get function using function pointer

//     fnptr_disp=disp;
//     printf("Address of fnptr=%p \n",fnptr_disp);
//     a = (*fnptr_disp)();//call to disp function using function pointer
//     printf("%d",a);
//     return 0;
// }

// void get(int a)
// {
//     printf("inside get function  %d\n",a);
// }

// int disp()
// {
//      int a = 2;
//     printf("\n inside disp function \n");
//     return a;
// }

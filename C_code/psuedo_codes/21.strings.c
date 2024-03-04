/*
if character is more than the size in scanf and gets then characters will print upto the size and
then program get aborted 
*** stack smashing detected ***: terminated
Aborted (core dumped) (Buffer overflow)

in case of fgets the program will not get terminated

Buffer: A buffer is a temporary storage space in a program's memory. 
        It's used to hold data, usually strings or input/output streams. 
        Buffer overflow occurs when too much data is placed into a buffer, 
        surpassing its allocated size. This can lead to overwriting adjacent memory, 
        potentially causing errors or security vulnerabilities.
*/ 


#include<stdio.h>
#include<stdlib.h>



// int main(void)
// {
    //string set of characters
//     char ch[]="sunbeam"; //string or character array
//     int i;
    //for(i=0;i<7;i++)
      //  printf(" %c ",ch[i]); //or %s is used
//       printf("%s",ch);
//     return 0;
// }




// int main(void)
// {
//     char name[20];
//     printf("\n Enter Name : "); 
//     scanf("%s",name);           // Hello World
//     printf("Name = %s ",name);  // Hello
//     return 0; //%s can only take input upto space, \n means first word
// }




// int main(void)
// {
//     char name[10];
//     printf("\n Enter Name ");
//     gets(name); //accept the string // if char is more than 10 then error: stack smashing detected
//     printf("%s",name);
//     puts(name); //to display the string on console
//     return 0;
    // puts and printf produce same output. put adds \n at the end
// }

/*
The gets() function doesn't perform any bounds checking, which means it doesn't know the size of the buffer 
you're providing. This can lead to buffer overflows, a common vulnerability that could be exploited by malicious users 
to inject arbitrary code or crash your program.

Instead of gets(), it's recommended to use fgets() for reading input. 
fgets() allows you to specify the size of the buffer you're reading into, 
reducing the risk of buffer overflows.
*/

// int main(void) {
//     char name[10];
//     printf("\nEnter Name: ");
//     fgets(name, sizeof(name), stdin); // Read input safely using fgets
//     printf("Name: %s", name); // if input is more than 10 char it will upto 10 char only
//     return 0;
// }



// int main(void)
// {
//     char s[]="PreCAT-\0OM5"; 
//     printf("s = %s ",s); // PreCAT- //because of \0 it gets terminated
//     printf("\n Sizeof(s)=%zu \n",sizeof(s));  //12 // as null character is considers as one character
//     return 0;
// }



// int main(void)
// {
//     char str[]="Sunbeam";
//     printf("str=%p &str[0]=%p",str,&str[0]); // str=0x7ffde6120120 &str[0]=0x7ffde6120120
//     printf("\n *str=%c str[0]=%c",*str,str[0]); // *str=S str[0]=S
//     //*str - value at base address in %c format

//     printf("\n str=%s \n",str);
//     // printf("\n *str=%s \n",*str); warning as str is character pointer and anything can be printed 
   
//     return 0;
// }




// int main(void)
// {
//     char str[]="sunbeam";
//     printf("%s",str+3); //beam //base address+3 //3 characters skipped
//     printf("%c", *(str + 3)); // Print the character value at the memory location str + 3

//     // printf("%s",str+10); // random characters
//     printf("%zu",str+3); // prints address of str[3]
//     return 0;
// }



// int main(void)
// {
//     char str[]="sunbeam";
//     printf("%c \n",*str+1); // t // *str = s + 1 ASCII VALUE = t
//     printf("%c \n",*str+3);  // v
//     printf("%c",*(str+1)+1); // v // *str = u + 1 ASCII VALUE = v
//     printf("%c",*(str+3)+2); // d // *str = b + 2 ASCII VALUE = d
//     return 0;
// }




// int main(void)
// {
//     char ch[]="A"; //valid declaration
//     //char ch[]='A'; //invalid initialziation 
    
//     char ch[]={'A'};//valid initialization
//    // char ch[]={a};//invalid
 
//     //char ch[]={"Sunbeam"}; //invalid
//     char ch[]={'S','u','n','b','e','a','m'}; //valid 
//     return 0;
// }



// int main(void)
// {
//     char *str="12345678910"; //valid declaration
//     //string declaration using pointer
//     //str[0] = '2'; // Error - can't modify a character in a string literal through the pointer
    
//     printf("%s",str);
//     printf("\n size = %zu",sizeof(str)); // 8
//     printf("\n size = %zu",sizeof("OM54")); // 5
//     return 0;
// }



// int main(void)
// {
//     char s1[]="sunbeam";
//     char s2[]="sunbeam";
//     if(s1==s2) // This compares the memory addresses of s1 and s
//         printf("strings are same");
//     else
//         printf("strings are different"); // These will print
//     return 0;
// }



// int main(void)
// {
//     char *s1="sunbeam";
//     char *s2="sunbeam";
//     if(s1==s2)
//         printf("strings are same"); // These will print as address gets compared and to optimize code compiler give same addresses to identical strings.
//     else
//         printf("strings are different");
//     return 0;
// }



// int main(void) {
    // Declaring and initializing two pointers to string literals
//     char *s1 = "sunbeam"; // Pointer s1 points to the string literal "sunbeam"
//     char *s2 = "sun";     // Pointer s2 points to the string literal "sun"

    // Comparing the memory addresses pointed by s1 and s2 using the equality operator (==)
//     if (s1 == s2)
//         printf("strings are same");    // This won't be executed
//     else
//         printf("strings are different"); // This will be executed

//     return 0;
// }




// #define LEN 20 // Define a constant LEN with value 20
// int main(void) {

//     char city1[LEN] = "pune"; // Initializing with a string literal
//     char city2[LEN] = {'k','a','r','a','d','\0'}; // Initializing with individual characters
//     char city3[] = "Mumbai"; // Compiler determines size based on the string literal
//     // char city4[] = {'k','a','r','a','d'}; // Invalid initialization, missing null-terminator
//     char city5[] = {'p','u','n','e','\0'}; // Initializing with individual characters, manually adding null-terminator

//     printf("\n city1=%s sizeof(city1)=%zu ", city1, sizeof(city1));    // 20
//     printf("\n city2=%s sizeof(city2)=%zu ", city2, sizeof(city2));    // 20
//     printf("\n city3=%s sizeof(city3)=%zu  ", city3, sizeof(city3));   // 7
//     // printf("\n city4=%s sizeof(city4)=%zu ", city4, sizeof(city4)); // Uncommenting this line causes a compilation error
//     printf("\n city5=%s sizeof(city5)=%zu \n ", city5, sizeof(city5)); // 5

//     return 0;
// }





// ------------------- different types in which strings can be stored--------------------

// ^ - not that character

// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[^\n]s",str); // reads character until new line character comes
//     printf("String = %s",str); 
//     return 0;
// }
/*
Enter String l l l l
String = l l l l
*/

// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[^.]s",str);          // Read until . comes
//     printf("String = %s",str);
//     return 0;
// }



// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[0-9]s",str);  // read numeric character only
//     printf("String = %s",str);
//     return 0;
// }
/*
Enter String aaAA555
String =

Enter String 5454aaa
String = 5454
*/




// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[^0-9]s",str);  // don't read numeric character 
//     printf("String = %s",str);
//     return 0;
// }
/*
Enter String 64646aaa
String = 

Enter String aaaa5555
String = aaaa
*/




// int main(void)
// {
//     char str[20];
//     printf("\n Enter String "); 
//     scanf("%[A-Z]s",str); // only read capital character
//     printf("String = %s",str);
//     return 0;
// }


// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[^A-Z]s",str); //don't read capital characters
//     printf("String = %s",str);
//     return 0;
// }



// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[a-z]s",str);  // read small characters only
//     printf("String = %s",str);
//     return 0;
// }



// int main(void)
// {
//     char str[20];
//     printf("\n Enter String ");
//     scanf("%[^a-z]s",str); // don't read small characters
//     printf("String = %s",str);
//     return 0;
// }


// ----------------------------String Functions -------------------------------------------

//0.EXIT 1.LENGTH 2.FIND CHARACTER 3.CONCAT 4.STRING COMPARE 5.SEARCH STRING 6.STRING COPY
//1.strlen - give length of excluding null character
//2.strchr - searches for first occurrence of character and returns a pointer if not found returns NULL pointer
//3.stcat - concatenates (appends) the content of one string at the end of another.
//4.strcmp - compares two strings lexicographically.
//5.strstr - searches for first occurrence of a substring. returns pointer if not found then returns NULL pointer
//6.strcpy - copies the content of one string to another until null pointer.
// #include<string.h>
// int main(void)
// {

//     int choice;
//     int val;
//     char src[20];
//     char dest[20];
//     char ch;
//     char *ptr=NULL;
//     //char *src;
//     int len;
//     do
//     {
//         printf("Enter choice : ");
//         printf("\n 0.EXIT 1.LENGTH 2.FIND CHARACTER 3.CONCAT 4.STRING COMPARE 5.SEARCH STRING 6.STRING COPY \n");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             printf("\n Enter the string : ");
//             scanf("%s",src);
//             len=strlen(src);
//             printf("Length of string = %d \n",len);
//             break;

//             case 2:
//             printf("\n Enter the string : ");
//             scanf("%s",src);
//             printf("\n Enter Character to be searched : ");
//             scanf("%*c");
//             scanf("%c",&ch);

//             //char *strchr(const char *__s, int __c)
//             ptr=strchr(src,ch);
//             if(ptr==NULL){
//                 printf("\n character is not found"); // returns address of character if found
//                 //int index = ptr - str; // Calculating the index by subtracting pointers
//                 //printf("Character found at index: %d\n", index);
//             }
//             else
//                 printf("\n character is found");
//             break;

//             case 3:
//             printf("\n Enter the string1 : ");
//             scanf("%s",src);
//             printf("\n Enter the string2 : ");
//             scanf("%s",dest);
//             strcat(src,dest); // strcat(source,destination) // if destination size is small then buffer overflow
//             printf("\n Resultant String = %s \n",src);
//             break;

//             case 4:
//             printf("\n Enter the string1 : ");
//             scanf("%s",src);
//             printf("\n Enter the string2 : ");
//             scanf("%s",dest);

//             //int strcmp(const char *__s1, const char *__s2)
//             val=strcmp(src,dest); // Returns 0 if same // Returns ascii diff with -ve if src is ascii is greater and vice versa. 
//             printf("\n Value = %d \n",val);
//             break;   

//             case 5:

//             printf("\n Enter the string : ");
//             scanf("%s",src);
//             printf("\n Enter string to be searched : ");
//             scanf("%s",dest);

//             //char *strchr(const char *__s, int __c)
//             ptr=strstr(src,dest);
//             if(ptr==NULL)
//                 printf("\n string is not found");
//             else
//                 printf("\n string is found");
//             // src-sunbeam dest-sun found
//             // src-sunbeam dest-snbeam notfound
//             break;    
//             case 6:
//             printf("\n Enter the string1 : ");
//             scanf("%s",src);
//            // strcpy(dest,src); // if destination size is small then buffer overflow
//            strncpy(dest,src,5); 
//             printf("\n Destination String = %s Source String = %s \n",dest,src);
//             break;
//         }

//     }while(choice!=0);
//     return 0;
// }





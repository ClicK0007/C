/*
modes for text files

r (read) only for reading

w (write) 
	if the file exists then its contents are overwritten
	if the file does not exists it will be created

a(append)
	adding the contents at the end of file

r+
	Open for reading and writing both
	if the file does not exists then it return null

w+
	Open for reading and writing both
	if the file is existing its contents are overwritten
	if the file is not available , it will be created.

a+
	Open file for reading, writing and appending
	if the file does not exists it will be created.


*modes for binary files
rb
wb
ab
rb+
wb+
ab+ 	






text(normal)
binary(.bin)
*/

#include<stdio.h>
#include<stdlib.h>

//Reading the contents from the file.

// int main(void)
// {
//     FILE *fptr; // points towards the source file
//     char ch; // one by one character will be read

//     fptr=fopen("27.1.sourcetext.txt","r");//read mode //returns address of first character of source file
    //FILE *fopen(const char *__restrict__ __filename, const char *__restrict__ __modes)

//     if(fptr==NULL) // if file not find
//     {
//         printf("\n File Not Found");
//         return 0;
//     }

    // first fgetc stores first character in ch and reads another character
//     while((ch=fgetc(fptr)) !=EOF )  //EOF(-1) end of file // if src file has '-1' the program will NOT get terminate
        // End-of-File Indicator: EOF is a special marker used in file I/O to signal that there's no more data to read from the file.
//     {
//         fputc(ch,stdout); //fputc is used to put the character // stdout standard-output (prints on console)
//     }

//     printf("\n File reading done..... \n");

//     fclose(fptr); //close the file
//     return 0;
// }
/*
o/p:
These are the contents within '-1' the source file.
 File reading done..... 
*/ 




// Copying content from source file to destination file
// source file in read mode and destination file in write mode

// int main(void)
// {
//     FILE *fptr1,*fptr2;

//     char ch;

//     fptr1=fopen("27.1.sourcetext.txt","r");//r Read Mode

//     if(fptr1==NULL)
//     {
//         printf("\n File Not Found");
//         return 0;
//     }
    

//     fptr2=fopen("27.2.destfile.txt","w");

//     if(fptr2==NULL)
//     {
//         printf("\n File Not Found");
//         return 0;
//     }

//     ch=fgetc(fptr1);//only first character
//     while(ch!=EOF)
//     {
//         fputc(ch,fptr2); // puts ch in destination file
//         ch=fgetc(fptr1); // fgetc gets another character from src file
//     }

//     fclose(fptr1);
//     fclose(fptr2);

//     printf("\n contents are copied..\n");
//     return 0;
// }







// fseek() move the cursor 
// - from the beginning (SEEK_SET)
// - from end of file (SEEK_END)
// - current position of the file (SEEK_CUR)

// ftell() the current cursor position 

// int main(void)
// {
//     FILE *fptr;

//     char ch;

//     fptr=fopen("27.1.sourcetext.txt","r");//r Read Mode

//     if(fptr==NULL)
//     {
//         printf("\n File Not Found");
//         return 0;
//     }

//     fseek(fptr,10,SEEK_SET); // Go 10 location ahead from beginning of file it will points towards 11th location
//     printf("\n ftell=%lu fgetc=\n",ftell(fptr)); // ftell=10
//     printf("\n ftell=%lu fgetc=\n",ftell(fptr),fgetc(fptr)); // ftell=11 fgetc=t 
    //(fgetc will move one character after reading a character ahead of cursor means 11th character is read 
    //and cursor moves to 11th position - current current position after 11)
//     fseek(fptr,5,SEEK_CUR); // Go 5 location ahead of current location // 12 13 14 15 16 fgetc prints 17th character 
//     printf("\n ftell=%lu fgetc=%c \n",ftell(fptr),fgetc(fptr)); // ftell=17 fgetc=n

//     fseek(fptr,-5,SEEK_END); // Goes -5 location back from end of file
//     printf("\n ftell=%lu fgetc=%c \n",ftell(fptr),fgetc(fptr)); // -5 location back cursor at before -5th location
    // fgetc reads the character ahead of -5 means -5th character and cursor at -4th location

//     return 0;
// }










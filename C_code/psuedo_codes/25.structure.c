// . dot operator is used to access structure
// -> arrow operator is used to access structure through pointer
// in calling or returning just imaging struct EMP whole as int


#include<stdio.h>


// struct Student //declaration of structure
// {
//     int rn;
//     int marks;
//     int per;
// };
//Student is structure name
//rn, marks, per are members/data members/elements of structure

// int main(void)
// {
    //TO ACCESS THE MEMBERS/ELEMENTS OF STRUCTURE
    //WE NEED TO CREATE STRUCTURE VARIABLE

//     struct Student s1; //s1 is structure variable
//     // Student.rn=1; //error: student undefined
//     s1.rn=1;
//     s1.marks=80;
//     s1.per=75;

//     printf("RN=%d Marks=%d Per=%d",s1.rn,s1.marks,s1.per);

//     return 0;
// }



// struct Student
// {
//     int rn;
//     int marks;
// }s1; //s1 is called as structure variable at the time of declaration
// int main(void)
// {
//     s1.rn=10;
//     s1.marks=80;
//     printf("\n Roll no: %d Marks : %d \n",s1.rn,s1.marks); // 10 80
//     return 0;
// }



// struct Student
// {
//     int rn;
//     int marks;
// }s1={1,90};
 //s1 is called as strutrue variable 
 //and it is initialized at the time of declaration
// int main(void)
// {
//     printf("\n Roll no: %d Marks : %d \n",s1.rn,s1.marks); // 1 90
//     return 0;
// }




// struct Student
// {
//     int rn;
//     int marks;
// }s1,s2;

// int main(void)
// {
//     s1.rn=1;
//     s1.marks=80;

    //copying the contents element by element
     //s2.rn=s1.rn;
    // s2.marks=s1.marks;


//     s2=s1; //copy contents of s1 into s2


//     printf("\n S1 : Roll no: %d Marks : %d \n",s1.rn,s1.marks); // 1 80
//     printf("\n S2 : Roll no: %d Marks : %d \n",s2.rn,s2.marks); // 1 80
//     return 0;
// }



//taking input
// struct Employee
// {
//     int id;
//     int salary;
// };

// int main(void)
// {
//     struct Employee e1;
//     printf("\n Enter Emp id:");
//     scanf("%d",&e1.id);

//     printf("\n Enter Emp Salary:");
//     scanf("%d",&e1.salary);

//     printf("\n ID=%d Salary = %d \n",e1.id,e1.salary);
//     return 0;
// }




// typedef struct Employee
// {
//     int id;
//     int salary;

// }EMP; //EMP is nick name given to struct Employee

// int main(void)
// {
//     struct Employee real; //real is struture variable creation using real name
    
//     real.id=1;
//     real.salary=60000;

//     EMP nick_name; // created a structure varibale using nick name EMP
//     nick_name.id=2;
//     nick_name.salary=70000;
// }




// struct //Anonymous struture INVALID
// {
//     int num1;
//     int num2;
// };

// int main(void)
// { 
//     num1=20; //Error- undefined
//     num2=10; //Error- undefined
// }



// typedef struct  //anonymous structure having only nick name VALID
// {
//     int num1;
//     int num2;
    
// }TEST; //TEST is Nick Name given to anonymous structure
// int main(void)
// {
//     TEST t;

//     t.num1=10;
//     t.num2=20;
//     printf("%d %d",t.num1,t.num2); // 10 20 
//     return 0;
// }


// --------------------------Array of structure----------------
// typedef struct Employee
// {
//     int id;
//     char name[20];
//     int salary;
// }EMP;

// int main(void)
// {

//     struct Employee e[3]; //array of structure
//     int i;
//     printf("\n Enter details of Employees : ");
//     for(i=0;i<3;i++)
//     {
//         printf("Enter ID : ");
//         scanf("%d",&e[i].id);

//         printf("Enter Name : ");
//         scanf("%s",e[i].name);
        
//         printf("Enter Salary : ");
//         scanf("%d",&e[i].salary);
//    }


//     printf("\n Details of Employees are : \n ");
//     for(i=0;i<3;i++)
//     {
//         printf("ID : %d Name = %s Salary = %d \n",e[i].id,e[i].name,e[i].salary);
//     }
//     return 0;
// }




// typedef struct Employee
// {
//     int id;
//     char name[20];
//     int salary;
// }EMP;

// int main(void)
// {
//     EMP e1={1,"Akshita",60000};//e1 structure variable

//     struct Employee *ptr=&e1;//ptr is pointer variable of type struct Employee points to e1

//     printf("\n Accessing elements through struture variable (dot operator)\n");
//     printf("%d %s %d",e1.id,e1.name,e1.salary);

//     printf("\n Accessing elements through pointer(arrow operator)\n");
//     printf("%d %s %d",ptr->id,ptr->name,ptr->salary);

//     return 0;
// }




// --------------------------Structure in function

// typedef struct Dt
// {
//     int dd;
//     int mm;
//     int yy;
// }DATE;

// DATE accept(); // accept() return type is of type structure
// void disp(DATE d);// disp() taking structure as a argument


// int main(void)
// {
//     DATE d;
//     d=accept(); 
//     disp(d);

//     return 0;
// }

// DATE accept()
// {
//     DATE d;
//     printf("\n Enter Date : ");
//     scanf("%d",&d.dd);
    
//     printf("\n Enter Month : ");
//     scanf("%d",&d.mm);

//     printf("\n Enter Year : ");
//     scanf("%d",&d.yy);

//     return d;

// }
// void disp(DATE d)
// {
//     printf("%d-%d-%d \n",d.dd,d.mm,d.yy);
// }



// --------------------------Structure in function by pointer

// void modifyPoint(struct Point *p) {
//     p->x = 100; // Modifying the original structure via pointer
//     p->y = 200;
// }

// int main() {
//     struct Point myPoint = {10, 20};
//     modifyPoint(&myPoint); // Passing the address of the structure
//     printf("Modified Point: (%d, %d)\n", myPoint.x, myPoint.y); //100 200
//     return 0;
// }



// ---------------------------Nested Structure

/*
strcpy(st.name.fname, "chat");
st.name.fname = "chat"
In C, you can't use the assignment operator (=) to assign strings directly to arrays or character 
pointers after initialization. The strcpy function is used to copy strings into character arrays or 
pointers.
*/

// #include <string.h> 

// typedef struct {
//     int dd; 
//     int mm; 
//     int yy; 
// } DATE;

// typedef struct {
//     int rollno; 
//     int marks;  

//     struct {
//         char fname[10]; //st.name.fname
//         char mname[10]; //st.name.mname
//         char lname[10]; //st.name.lname
//     } name; 

//     DATE dob; // st.dob.__name__
// } STUDENT;

// int main(void) {
//     STUDENT st;

//     st.rollno = 1; // Assigning student roll number
//     st.marks = 90; // Assigning student marks

    // Copy first, middle, and last names using strcpy
//     strcpy(st.name.fname, "Akshita");    // Copy the first name
//     strcpy(st.name.mname, "Sparsh");     // Copy the middle name
//     strcpy(st.name.lname, "Chanchlani"); // Copy the last name

//     st.dob.dd = 8;   // Day of birth
//     st.dob.mm = 7;   // Month of birth
//     st.dob.yy = 2020; // Year of birth

//     printf("Student Information:\n");
//     printf("Roll number: %d\n", st.rollno);
//     printf("Marks: %d\n", st.marks);
//     printf("Name: %s %s %s\n", st.name.fname, st.name.mname, st.name.lname);
//     printf("Date of Birth: %d-%d-%d\n", st.dob.dd, st.dob.mm, st.dob.yy);

//     return 0;
// }





// typedef struct {
//     int dd; // Day
//     int mm; // Month
//     int yy; // Year
// } DATE;

// typedef struct {
//     int rollno; // Student roll number
//     int marks;  // Student marks

//     struct {
//         char fname[10]; // First name
//         char mname[10]; // Middle name
//         char lname[10]; // Last name
//     } name; // Structure variable to hold student names

//     DATE dob; // Structure variable of type DATE for storing date of birth
// } STUDENT;

// int main(void) {
//     STUDENT st;

//     printf("Enter Student Roll number: ");
//     scanf("%d", &st.rollno);

//     printf("Enter Student Marks: ");
//     scanf("%d", &st.marks);

//     printf("Enter First Name: ");
//     scanf("%s", st.name.fname);

//     printf("Enter Middle Name: ");
//     scanf("%s", st.name.mname);

//     printf("Enter Last Name: ");
//     scanf("%s", st.name.lname);

//     printf("Enter Date of Birth (dd mm yyyy): ");
//     scanf("%d %d %d", &st.dob.dd, &st.dob.mm, &st.dob.yy);

//     printf("\nStudent Information:\n");
//     printf("Roll number: %d\n", st.rollno);
//     printf("Marks: %d\n", st.marks);
//     printf("Name: %s %s %s\n", st.name.fname, st.name.mname, st.name.lname);
//     printf("Date of Birth: %d-%d-%d\n", st.dob.dd, st.dob.mm, st.dob.yy);

//     return 0;
// }


// -----------------------------------SIZE of Structure-------------------------------------------------
// struct student
// {
//     int rollno; // 4
//     int marks;  // 4
// };
// int main(void)
// {
//     struct student st;
//     printf("\n Size of = %zu \n",sizeof(st)); // 4 + 4 =8
//     return 0;
// }




// MEMORY PACKING is done based on largest data member available inside the structure

// In structure highest datatype memory is allocated to all element. 
// lets consider below case
// 4 bytes is given to rollno. and marks then // 4 + 4
// 4 bytes is also given to grade BUT 3 bytes are remaining // + 4
// So, 1 byte is assign to ch form those 3 bytes which are remaining
// and then result is assign with another 4 bytes // +4
// TOTAL = 16

// In grade, still 2 bytes is remaining these bytes are known as SLACK BYTES

// - these is the bytes which is counting //

// struct student {
//     int rollno;  // 4 bytes          -
//     int marks;   // 4 bytes          -
//     char grade;  // 4 byte           -
//     char ch;     // 1 byte (usually padded to 4 bytes due to alignment)
//     int result;  // 4 bytes          -
// };


// int main(void)
// {
//     struct student st;
//     printf("\n Size of = %zu \n",sizeof(st)); //16
//     return 0;
// }





//     int rollno;  // 4 bytes         -
//     int marks;   // 4 bytes         -
//     char grade;  // 4 byte          -
//     int result;  // 4 bytes         -
//     char ch;     // 4 bytes         -
//      Total = 20


//     int rollno;  // 4 bytes              -
//     int marks;   // 4 bytes              -
//     char grade;  // 4 byte               -
//     char ch;     // 1 byte in grade's remaining 3 bytes. no special 4 bytes
//     char name;   // 1 byte in grade's remaining 2 bytes. no special 4 bytes
//     int result;  // 4 bytes              -
//      Total = 16




//     char grade; // 4 bytes              - // As int size is more
//     char ch; // 1 bytes in grade only
//     int rollno; // 4 bytes              -
//     Total = 8        



// double marks; //8bytes   - 
// int rollno; //8bytes     -
// int num; // 4 bytes in roll no.
// char ch; // 8 bytes      -
// Total - 24
    



// double marks; //8bytes                  -
// int rollno;   //8bytes                  -
// int num;      // 4 bytes in roll no.
// char ch;      // 8 bytes                -
// int number;   // 4 bytes in ch
// Total - 24




//   char name[20]; // 20 bytes     -  
//   char n;        // 4 bytes      -
//   int rn;        // 4 bytes      -
//   int marks;     // 4 bytes      -
//   Total - 32 bytes



//   char name[17]; // 20 bytes     - // bytes allocation in multiples of 4 because of int
//   char n;        // 0 bytes        // 1 byte in name as 3 bytes is remaining there
//   int rn;        // 4 bytes      -
//   int marks;     // 4 bytes      -
//   Total - 28 bytes




//   char name[3];  // 4 bytes will be allocated            -
//   char n;        // 1 byte in name as 1 byte is remaining
//   int rn;        // 4 bytes                              -
//   int marks;     // 4 bytes                              -
//   Total - 12 bytes


// ============================Bit Field Concept===================================//
// These is only in structures


// struct student
// {
//     char name[20]; // 1. size = 20
//     int rn:5; // allocates 5 bits only out of 32 bits (4*8) 
    // 2. next 4 bytes (32 bits) is allocated but only 5 bits is used
//     int marks:4; // allocate 4 bits only out 
    // 3. after 5 bits these 4 bits is allocated total 9 bits after name[20] but 4 bytes is allocated already
    // so output = 20 + 4 = 24
// };
// int main(void)
// {
//     struct student st;
//     printf("size = %zu \n",sizeof(st));  // 24
//     return 0;
// }




// #pragma pack(1) //if pack (2) two byte everytime
//is used to tell compiler please perform memory packing by one one byte every time


// struct student
// {
//     char name[20]; // 20 bytes is allocated
//     int rn:5; // 5 bits
//     int marks:4; // 4 bits
    // 9 bits means 1 byte + 1 bit
    // 20 + 1 byte + 1 bit (byte by byte)
    // 20 + 1 + 1 
    // 22
// };

// int main(void)
// {
//     struct student st;
//     printf("size = %zu \n",sizeof(st)); // 22
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>


// #define ROW 2
// #define COL 2
// int main(void)
// {
//     int mat[2][2]={{0,0},{0,1},{1,1},{1,2}}; //allowed
//     int mat1[ROW][COL]={{0,0},{0,1},{1,1},{1,2}}; //allowed
//     int mat3[][COL]={{0,0},{0,1},{1,1},{1,2}}; // allowed
//     int mat4[2][2];//declaration //allowed

//     //int mat2[ROW][]={{1,1},{1,2},{2,1},{2,2}}; //not allowed
//     //int mat[][]={{1,1},{1,2},{2,1},{2,2}};// not allowed

//     return 0;
// }





// int main(void)
// {
//     int a[2][2];
//     int i,j;
//     printf("Enter Array Elements : ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n Base Address : %p \n",a);
//     printf("\n Array Elements are: \n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d at %p \n",a[i][j],&a[i][j]);
//         }
//     }
//     return 0;
// }
/*
Base Address : 0x7fffb909af70 
Array Elements are: 
10 at 0x7fffb909af70 
20 at 0x7fffb909af74 
30 at 0x7fffb909af78 
40 at 0x7fffb909af7c 
*/



/*
    for 2d array one * is always at outside
    **p - base address (0,0)
    *(*p+1) - star inside means j value (0,1)

    *(*(p+1)) - star outside means i value (1,0)
    *(*(p+2)) - (2,0)

    *(*(p+1)+2) - (1,2)
*/

// int main(void)
// {
//     int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}};
//     int *p[4]={*arr,*(arr+1),*(arr+2)};
    /*
    {
        {{0, 0}, {0, 1}, {0, 2}},
        {{1, 0}, {1, 1}, {1, 2}},
        {{2, 0}, {2, 1}, {2, 2}}
    };
    */
    // printf("%d %d \n",arr[0][0],**p); // 11 11
    // **p address be 500 and *p address be 100
    //**p
    //**500
    //*100
    //11

    // printf("%d %d \n",arr[0][1],*(*p+1)); // 12 12
    //*(*p+1)
    //*(*500+ 1*sizeof(int))
    //*(100+ 1*sizeof(int))
    //*104
    //12


    // printf("%d %d \n",arr[0][2],*(*p+2)); // 13 13

//    printf("%d %d \n",arr[1][0],*(*(p+1))); // 14 14
    //*(*(p+1)))
    //*(*(500+1))
    //*(*(508))
    //*(112)  //14

//    printf("%d \n ",*(*(p+2))); // 17 

//    printf("%d \n",*(*(p+1)+2)); // 16

//    printf("%d \n",*(*(p+2)+1)); // 18 

//    printf("%d \n",(*(*(p+1)+1))+20); // 35
    
    //a[i][j]=*(*(p+i)+j) 

//     return 0;
// }



//--------------------- passing 2d array in function------------------
// void accept(int mat[2][2]);

// int main(void)
// {
//     int a[2][2];
//     accept(a);
//     return 0;
// }

// void accept(int mat[2][2])
// {
//     int i,j;
//     printf("Enter Array Elements : ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat[i][j]);
//         }
//     }

//        printf("\n Array Elements are: \n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d at %u \n",mat[i][j],&mat[i][j]);
//         }
//     }
// }





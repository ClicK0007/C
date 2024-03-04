#include <stdio.h>
int main()
{
    int a,n,count;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        count=i+1;
        a=1;
        // for (int j = 0; j < n-(i+1); j++)
        // {
        //     printf(" ");
        // }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ",count);
            count= count + (n-a);
            a++;
        }
        printf("\n");
    }
} 
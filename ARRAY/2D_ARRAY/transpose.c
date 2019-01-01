/*
*       Author Name     :       Anshika Gupta
*       Aim             :       To transpose matrix of order 3*3 and the elements of maitrix order 3*3 is given by user.
*/

#include<stdio.h>
void main()
{
    int array1[3][3],array2[3][3],i,j;

    printf("\nEnter the elements of matrix of order 3*3 :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }

    printf("\nThe matrix of order 3*3 before transpose shown as below:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("|%3d\t",array1[i][j]);
        }
        printf("\n\n");
    }

   printf("\nThe transpose of matrix of order 3*3 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            array2[i][j]=array1[j][i];
            printf("|%3d\t",array2[i][j]);
        }
        printf("\n\n");
    }
}

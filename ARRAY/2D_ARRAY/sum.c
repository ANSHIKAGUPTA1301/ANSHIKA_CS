/*
*        Author Name     :      Anshika Gupta
*        Aim             :      The sum of two matrices and the elements of two matrix is given by user and print the two matrix.
*/

#include<stdio.h>
int main()
{
    int array1[3][3],array2[3][3],i=0,j=0;
    printf("\nEnter the elements of firsr array of order 3*3:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("\nEnter the elements of second array of order 3*3:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&array2[i][j]);
        }

    }
    printf("\nThe first matrix order 3*3 shown as below:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("|%3d\t",array1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix order 3*3 shown as below:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("|%3d\t",array2[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of two matrices of order 3*3 is:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            array1[i][j]+=array2[i][j];
        }
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("|%3d\t",array1[i][j]);
        }
        printf("\n");
    }
    return 0;
 }


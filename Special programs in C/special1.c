/*
*   Author Name      :        Anshika Gupta
*   Aim              :        To produce the multiplication table of 1 to 9, using nested loops.
*/

#include<stdio.h>
int main()
{
    int i,j,a;
    printf(" *|\t  1\t  2\t  3\t  4\t  5\t  6\t  7\t  8\t  9\n");
    printf(" \n  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j==0)
            {
                printf("%3d",i);
            }
            else
            {
                printf("%3d",(i*j));
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}

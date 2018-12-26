/*
*       Author Name      :      Anshika Gupta
*       Aim              :      Prints the numbers from 1 to 55, 11 numbers per line. The program shall print "Do" in place of the numbers which are multiples of 3, "Re" for multiples of 5, "Mi" for multiples of 7, "DoRe" for multiples of 3 and 5 and "DoMi" for multiples of 3 and 7.
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=55;i++)
    {
        if(i%11==0)
        {
            printf("%d\t\n\n",i);
        }
       else if(i%3==0 && i%5==0)
        {
            printf("DoRe\t");
        }
        else if(i%3==0 && i%7==0)
        {
            printf("DoMi\t");
        }
       else if(i%3==0)
        {
            printf("Do\t");
        }
        else if(i%5==0)
        {
            printf("Re\t");
        }
        else if(i%7==0)
        {
            printf("Mi\t");
        }
        else if(i%3!=0 && i%5!=0 && i%7!=0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}

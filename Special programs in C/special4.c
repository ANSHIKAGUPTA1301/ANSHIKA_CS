/*
*       Author Name      :       Anshika Gupta
*       Aim              :       To input three numbers a,b and c and print their values in descending order.
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nThe numbers in descending order are:\n");
    if(a>b && a>c && b>c)
    {
        printf("%d\t%d\t%d",a,b,c);
    }
    else if(a>b && a>c && c>b)
    {
        printf("%d\t%d\t%d",a,c,b);
    }
    else if(b>a && b>c && a>c)
    {
        printf("%d\t%d\t%d",b,a,c);
    }
    else if(b>a && b>c && c>a)
    {
        printf("%d\t%d\t%d",b,c,a);
    }
    else if(c>a && c>b && a>b)
    {
        printf("%d\t%d\t%d",c,a,b);
    }
    else if(c>a && c>b && b>a)
    {
        printf("%d\t%d\t%d",c,b,a);
    }
    return 0;
}

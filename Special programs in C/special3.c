/*
*       Author Name      :       Anshika Gupta
*       Aim              :       To calculate and print the sums of even and odd integers of the first n natural numbers.
*/

#include<stdio.h>
int main()
{
    int i,num,odd_sum=0,even_sum=0;
    printf("Enter the number up to which you want to calculate:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even_sum+=i;
        }
        else
        {
            odd_sum+=i;
        }
    }
    printf("\nThe sum of even integers is %d\n",even_sum);
    printf("\nThe sum of odd integers is %d\n",odd_sum);
return 0;
}

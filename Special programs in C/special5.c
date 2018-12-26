/*
*       Author Name     :       Anshika Gupta
*       Aim             :       To tabulate the function.
                                x = (x^2 + 1.5x + 5)/(x - 3)
                                for x = [-10,10]-> -10 to 10
                                x should take values -10, -8, -6, ....., 6, 8, 10.

*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    float a;
    for(x = -10 ; x <= 10 ; x += 2)
    {

            a=(pow(x,2) + 1.5 * x + 5)/(x - 3);
            printf("For x  =  %d\t f(x)  =  %f\n",x,a);

    }
    return 0;
}

/*
 Calculates value of pi using both BBP and Leibniz methods
 and allows for comparison of number of iterations before
 acheiving an error of < 10^-6, and comparing the time it 
 takes to do so 
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int
main (void)
{
    int i;
    for (i = 100000; i <= 1000000; i += 100000)
    {
        double pi = pi_leibniz (i);
        printf ("%8d   %20.15f   %20.15f\n", i, pi, fabs (pi - M_PI));
    }

    printf ("\n");

    for (i = 1; i <= 10; i++)
    {
        double pi = pi_bbp (i);
        printf ("%8d   %20.15f   %20.15f\n", i, pi, fabs (pi - M_PI));
    }
    double tb = bbp_time ();
    printf ("BBP: %21.9f \n", tb);
    double tl = leibniz_time ();
    printf ("Leibniz: %17.9f \n", tl);
    printf ("Ratio: %19.0f \n", tl / tb);

    return 0;
}

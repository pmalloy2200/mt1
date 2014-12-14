/*
 Calculates the value of Pi using the Bailey-Borwein-Plouffe
 series. Returns value of pi. 
 */
#include <math.h>
#include <stdio.h>
double
pi_bbp (int n)
{
    double pi = 0;
    int i = 0;
    double a, b, c, d, e;
    for (i = 0; i <= n; i++)
    {
        a = 1. / (pow (16, i));
        b = 4. / ((8. * i) + 1.);
        c = 2. / ((8. * i) + 4.);
        d = 1. / ((8. * i) + 5.);
        e = 1. / ((8. * i) + 6.);
        pi = pi + (a * (b - c - d - e));
    }
    return pi;
}

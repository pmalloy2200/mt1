/*
 Calculates the value of Pi using the Leibniz
 series. Returns value of pi. 
 */
#include <math.h>
#include <stdio.h>

double pi_leibniz (int n)
{
double i;
double l= 0;
for (i = n; i >= 0; i--)
    { 
    l = l + pow(-1,i)/(2*i+1);
    }
double pi = 4 * l;
return pi;    
}


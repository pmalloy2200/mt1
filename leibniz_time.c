/*
 Calculates the amount of time required to calculate 
 Pi within 10^-6 using Leibniz method.
 */
 
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "pi_funs.h"

double leibniz_time(void)
{ 
double t1, t2;
t1 = clock();

double k = 500;
int n;
for (n = 0; n < k; n++)
    {
     pi_leibniz(100000);
    }
t2 = clock();
double tm = (t2 - t1) / (double) CLOCKS_PER_SEC;
double tpr = tm/k;
return tpr;


}

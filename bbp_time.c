/*
 Calculates the amount of time required to calculate 
 Pi within 10^-6 using Bailey-Borwein-Plouffe method.
 */
 
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "pi_funs.h"

double bbp_time(void)
{ 

double t1 = clock();

double k = 30000000;
int n;
for (n = 0; n < k; n++)
    {
     pi_bbp(3);
    }
double t2 = clock();
double tm = (t2 - t1) / (double)CLOCKS_PER_SEC;
double tpr = tm/k;
return tpr;


}




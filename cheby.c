#include <math.h>

double cheby(N,x)
int N;
double x;
{
	if (x <= 1)
		return cos(N * cos(x));
	else 
		return cosh(N * log(x + sqrt(x*x-1)));
		}
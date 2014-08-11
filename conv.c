#include <stdlib.h>

void conv(M, h, L, x, y)
double *h, *x, *y;
int M, L;
{
	int n,m;
	
	for (n = 0; n < L+M; n++)
		for (y[n] = 0, m = max(0, n-L+1); m <= min(n,M); m++)
			y[n] += h[m] * x[n-m];
}
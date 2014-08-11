#include <cmplx.h>

complex dtft();

void *x, wa, wb;
complex *X;
int L, N;
{
	int k;
	double dw = (wb-wa)/N;
	
	for (k=0;k<N; k++)
		X[k] = dtft(L, x, wa + k*dw);
		}
		
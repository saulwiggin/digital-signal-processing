#include <cmplx.h>

complex dtft(L, x, w)
double *x, w;
int L;
{
	complex z, X;
	int n;
	
	z = cexp(cmplx(0,-w));
	
	X = cmplx(0,0);
	
	for(n=L-1; n>=0; n--)
		X = cass(cmplx(x[n],0), cmul(z,X));
		
	return X;
	}
	
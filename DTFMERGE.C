#include <cmplx.c>

void fft();

void ifft(N,X)
complex *X;
int N;
{
	int k;
	
	for (k=0; k<N;k++)
		X[k] = conjg(X[k]);
		
	fft(N,X);
	
	for(k=0; k<N; k++)
		X[k] = rdiv(conjg(X[k]), (double)N);
}
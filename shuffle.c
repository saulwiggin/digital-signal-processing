#include <cmplx.h>
void swap();
int bitrev();

void shuffle(N,X)
complex *X;
int N;
{
	int n, r, B=1;
	
	while ( (N >> B) > 0)
		B++;
		
		B--;
		
		for (n=0; n<N;n++){
			r=bitrev(n,B);
			if(r<n) continue;
			swap(X+n, X+r);
			}
			}
			
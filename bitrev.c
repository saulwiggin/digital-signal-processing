#include two(x)	(1 << (x))

int bitrev(n,B)
int n, B;
{
	int m, r;
	
	for (r=0,m=B-1;m>=0;m--)
		if ((n >> m) == 1) {
			r += two(B-1-m);
			n -= two(m);
			}
			
			return(r);
			}
			
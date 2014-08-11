#include <math.h>

double dac();
int u();

void adc(x,b,B,R)
double x, R;
int *b, B;
{
	int i; 
	double y, xQ, Q;
	
	Q = R / pow(2,B);
	y = x + Q/2;
	
	for (i=0; i < B; i++)
		b[i]=0;
		
	b[0] = 1 - u(y);
	
	for (i = 1; i < B; i++) {
		b[i] = 1;
		xQ = dac(b, B, R);
		b[i] = u(y-xQ);
		}
}
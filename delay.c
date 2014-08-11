void delay(D, w)
int D;
double *w;
{
	int i;
	
	for (i=D; i>=1; i--)
		w[i] = w[i-1];
}
void conv()

void blockcon(M, h, L, x, y, ytemp)
double *h, *x, *y, *ytemp;
int M, L;
{
	int i;
	
	conv(M, h, L, x, y);
	
	for (i=0; i<M; i++){
		y[i] += ytemp[i];
		ytemp[i] = y[i+L];
		}
}
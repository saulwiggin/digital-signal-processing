double tap(), can();
void cdelay();

double lowpass(D, w,p,M,a,b,v,x)
double *w, **p, *a, *b, *v, x;
int D;
{
	double y, sD;
	
	sD = tap(D, w, *p, D);
	y = x + can(M, a, M, b, v, sD);
	**p = y;
	cdelay(D,w,p);
	
	return y;
	}
	
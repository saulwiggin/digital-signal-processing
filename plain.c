double tap();
void cdelay();

double plain(D, w, p, a, x)
double *w, **p, a, x;

int D;
	{
	double y, sD;
	
	sD = tap(D,w,*p,D);
	y = x + a * sD;
	**p = y;
	cdelay(D,w,p);
	
	return y;
	}
	
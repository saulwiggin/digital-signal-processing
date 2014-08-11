double tap();
void cdelay();

double allpass(D, w, p, a, x)
double *w, **p, a, x;
int D;
{
	double y, s0, sD;
	
	sD = tap(D, w, *p, D);
	s0 = x + a * sD;
	y = -a * s0 + sD;
	**p = s0;
	cdelay(D,w,p);
	
	return y;
	}
	
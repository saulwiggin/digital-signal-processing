double tap();

double tapi(D, w, p, d)
double *w, *p, d;
int D;
{
	int i, j;
	double si, sj;
	
	i (int) d;
	j = (i+1) % (D+1);
	
	si = tap(D, w, p, i);
	sj = tap(D, w, p, j);
	
	return si + (d - i)*(sj - si);
}

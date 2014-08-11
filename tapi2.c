double tap2();

double tapi2(D, w, q, d)
double *w, d;
int D, q;
{
	int i, j;
	double si, sj;
	i = (int) d;
	j = (i+1) % (D+1);
	
	si = tap2(D, w, q, i);
	sj = tap2(D, w, q, j);
	
	return si + (d - i) * ( sj - si);
}
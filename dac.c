double dac(b, B, R)
int *b, B;
double R;
{
	int i;
	double dac = 0;
	
	b[0] = 1 - b[0];
	
	for (i = B-1; i >=0; i--)
		dac = 0.5 * (dac + b[i]);
		
		dac = R * (dac - 0.5);
		
		b[0] = 1 - b[0];
		
		return dac;
		
	}
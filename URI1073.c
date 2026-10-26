#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	long int n, ct, q;
	scanf("%d", &n);
	ct = 2;
	while ( ct <= n){
		q = pow(ct,2);
		printf("%ld^2 = %ld\n", ct, q);
		ct = ct + 2;
	}
	return 0;
}


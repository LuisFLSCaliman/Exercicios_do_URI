#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int N, X, ct, ctin, ctout;
	scanf("%d", &N);
	ct = 0;
	ctin = 0;
	ctout = 0;
	while ( ct < N){
		scanf("%d", & X);
		if ( X >= 10 && X <= 20){
			ctin++;
		}
		else{
			ctout++;
		}
		ct++;
	}
	printf("%d in\n%d out\n", ctin, ctout);
	return 0;
}


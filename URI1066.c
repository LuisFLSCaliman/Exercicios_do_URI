#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, y, mod, par, impar, posit, negat;
	par = 0;
	impar = 0;
	posit = 0;
	negat = 0;
	
	for ( x = 1; x <= 5; x++){
		scanf("%d", &y);
		mod = y%2;
		if ( mod == 0){
			par++;
		}
		else{
			impar++;
		}
		if ( y > 0){
			posit++;
		}
		else{
			if ( y != 0){
				negat++;
			}
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, posit, negat);
	
	return 0;
}


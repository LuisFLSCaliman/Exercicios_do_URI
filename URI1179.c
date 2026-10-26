#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int x, par[5], impar[5];
	int p = 0;
	int imp = 0;
	for (int i = 0; i < 15; i++){
		scanf("%d", &x);
		if ( x % 2 == 0){
			par[p] = x;
			if ( p == 4){
				for (int j = 0; j < 5; j++){
					printf("par[%d] = %d\n", j, par[j]);
				}
				p = 0;
			}
			else {
				p++;
			}
		}
		else{
			impar[imp] = x;
			if ( imp == 4){
				for (int k = 0; k < 5; k++){
					printf("impar[%d] = %d\n", k, impar[k]);
				}
				imp = 0;
			}
			else {
				imp++;
			}
			
		}
	}
	for ( int i = 0; i < imp; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	for ( int i = 0; i < p; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}
	return 0;
}


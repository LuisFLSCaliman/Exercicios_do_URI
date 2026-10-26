#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int x, y, vet[2000];
	scanf("%d", &x);
	
	for ( int i = 0; i <= 2000; i++ ){
		vet[i] = 0;
	}
	
	for ( int i = 0; i < x; i++){
		scanf("%d", &y);
		vet[y] = vet[y] + 1;	
	}
	for ( int i = 0; i <= 2000; i++){
		if ( vet[i] > 0){
			printf("%d aparece %d vez(es)\n", i, vet[i]);
		}
	}


	return 0;
}


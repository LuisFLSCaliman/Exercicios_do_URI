#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int vet[10], x;
	
	for ( int i = 0; i < 10; i++){
		scanf("%d", &x);
		if ( x <= 0){
			x = 1;
		}
		vet[i] = x;
	}
	for ( int i = 0; i < 10; i ++){
		printf("X[%d] = %d", i,vet[i]);
	}
	return 0;
}


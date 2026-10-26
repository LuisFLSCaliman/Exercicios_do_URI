#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int vet[20], aux;
	for ( int i = 0; i < 20; i++){
		scanf("%d",&vet[i]);
	}
	for ( int i = 0; i < 10; i++){
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;
	}
	for ( int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, vet[i]);
	}
	return 0;
}


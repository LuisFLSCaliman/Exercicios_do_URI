#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int vet[10], x;	
	scanf("%d",&x);
	vet[0] = x;
	printf("N[0] = %d\n", x);
	
	for ( int i = 1; i < 10; i++){
		vet[i] = vet[i-1]*2;
		printf("N[%d] = %d\n", i, vet[i]);
	}
	
	return 0;
}


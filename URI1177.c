#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int vet[1000], t;
	int x = 0;
	scanf("%d", &t);
	
	for ( int i = 0; i < 1000; i++){
		vet[i] = x;
		x++;
		if ( x == t){
			x = 0;
		}
		printf("N[%d] = %d\n", i, vet[i]);
	}
	return 0;
	
}


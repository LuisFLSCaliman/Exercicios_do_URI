#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int L;
	double M[12][12], soma, x;
	char T;
	soma = 0.0;
	scanf("%d %s", &L, &T);
	
	for ( int i = 0; i < 12; i++){
		for ( int j = 0; j <= 11; j++){
			scanf("%lf",&M[i][j]);
			if(i == L){
				soma += M[i][j];
			}
		}
	}	
	if ( T == 'S'){
		printf("%.1lf\n", soma);
	}
	else {
		if ( T == 'M'){
		printf("%.1lf\n", soma/12);
		}
	}

	return 0;
	//está errado
}


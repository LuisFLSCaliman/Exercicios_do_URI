#include <stdio.h>

int main()
{
	double M[12][12], soma = 0.0;
	char O;
	scanf("%s", &O);
	
	for ( int i = 0; i < 12; i++){
		for ( int j = 0; j < 12; j++){
			scanf("%lf", &M[i][j]);
		}
	}
	for ( int i = 0; i < 5; i++){
		for ( int j = i+1; j < 11-i; j++){
			soma = soma + M[i][j];
		}
	}
	if ( O == 'S'){
		printf("%.1lf\n", soma);
	}
	else {
		if ( O == 'M'){
			printf("%.1lf\n", soma/30);
		}
	}
	return 0;
}


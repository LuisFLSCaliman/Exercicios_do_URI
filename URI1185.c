#include <stdio.h>

int main()
{
	float M[12][12], soma = 0.0;
	char O;
	scanf("%s", &O);
	
	for ( int i = 0; i < 12; i++){
		for ( int j = 0; j < 12; j++){
			scanf("%f", &M[i][j]);
		}
	}
	for ( int i = 0; i < 11; i++){
		for ( int j = 10 - i; j >= 0; j--){
			soma = soma + M[i][j];
		}
	}
	if ( O == 'S'){
		printf("%.1f\n", soma);
	}
	else {
		if ( O == 'M'){
			printf("%.1f\n", soma/66);
		}
	}
	return 0;
}


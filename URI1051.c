#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, y;
	scanf("%f", &x);
	
	if( x >= 0 && x <= 2000){
		printf("Isento\n");
	}
	if( x > 2000 && x <= 3000){
		y = (x-2000) * 0.08;
		printf("R$ %.2f\n", y);
	}
	if( x > 3000 && x <= 4500){
		y = (x-3000) * 0.18 + 1000 * 0.08;
		printf("R$ %.2f\n", y);
	}
	if( x > 4500){
		y = (x-4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08;
		printf("R$ %.2f\n", y);
	}
	return 0;
}


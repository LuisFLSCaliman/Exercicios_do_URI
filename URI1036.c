#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A, B, C;
	scanf("%lf %lf %lf", &A, &B, &C);
	double D, R1, R2;
	D = (B*B)+(-4*A*C);
	if(D<0 || A == 0){
		printf("Impossivel calcular\n");
	}
	else{
	
	R1 = (-B + sqrt(D))/ (2*A);
	R2 = (-B - sqrt(D))/ (2*A);
	
	printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
	}
	return 0;
}


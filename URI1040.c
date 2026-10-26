#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float N1, N2, N3, N4;
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	double M;
	M = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
	printf("Media: %.1f\n", M);
	if ( M >= 7){
		printf("Aluno aprovado.\n");
	}
	else {
		if ( M < 5){
			printf("Aluno reprovado.\n");
		}
		else{
			printf("Aluno em exame.\n");
			double N, J;
			scanf("%lf", &N);
			printf("Nota do exame: %.1lf\n", N);
			J = (N + M)/2;
			if (J > 5){
				printf("Aluno aprovado.\n");
				printf("Media final: %.1lf\n", J);
			}
			else {
				printf("Aluno reprovado.\n");
				printf("Media final: %.1lf\n", J);
			}
		}
	}
	return 0;
}


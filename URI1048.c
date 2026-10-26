#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	double s, ns, r;
	scanf("%lf", &s);
	if(s <= 400){
		ns = 1.15 * s;
		r = ns - s;
		printf("Novo salario: %.2lf\n", ns);
		printf("Reajuste ganho: %.2lf\n", r);
		printf("Em percentual: 15 %%\n");
	}
	if(s > 400 && s <= 800){
		ns = 1.12 * s;
		r = ns - s;
		printf("Novo salario: %.2lf\n", ns);
		printf("Reajuste ganho: %.2lf\n", r);
		printf("Em percentual: 12 %%\n");
	}
	if(s > 800 && s <= 1200){
		ns = 1.10 * s;
		r = ns - s;
		printf("Novo salario: %.2lf\n", ns);
		printf("Reajuste ganho: %.2lf\n", r);
		printf("Em percentual: 10 %%\n");
	}
	if(s > 1200 && s <= 2000){
		ns = 1.07 * s;
		r = ns - s;
		printf("Novo salario: %.2lf\n", ns);
		printf("Reajuste ganho: %.2lf\n", r);
		printf("Em percentual: 7 %%\n");
	}
	if(s > 2000){
		ns = 1.04 * s;
		r = ns - s;
		printf("Novo salario: %.2lf\n", ns);
		printf("Reajuste ganho: %.2lf\n", r);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}


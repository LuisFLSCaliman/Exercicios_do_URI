#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, x;
	float a, b, c, m;
	scanf("%d", &n);
	x = 0;
	while (x < n){
		scanf("%f %f %f", &a, &b, &c);
		m = (2*a + 3*b + 5*c)/10;
		printf("%.1f\n", m);
		x++;
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, x, y, z, w;
	n = 1;
	y= 0;
	while ( n <= 100){
		scanf("%d", &x);
		if ( x > y){
			z = x;
			w = n;
			y = x;
		}
		n++;
	}
	printf("%d\n%d\n", z, w);
	return 0;
}


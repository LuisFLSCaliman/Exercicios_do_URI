#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, x;
	scanf("%d", &n);
	x = 1;
	while ( x < 10000){
		if ( x%n == 2){
			printf("%d\n", x);
		}
		x++;
	}
	return 0;
}


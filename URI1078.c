#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n;
	scanf("%d", &n);
	for ( int ct = 1; ct <= 10; ct++){
		printf("%d x %d = %d\n", ct, n, ct*n);
	}
	return 0;
}


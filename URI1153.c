#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, f;
	scanf("%d", &n);
	f = 1;
	while ( n >= 1){	
		f = f*n;
		n--;
	}
	printf("%d\n", f);

	return 0;
}


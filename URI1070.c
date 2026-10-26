#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int x, ct;
	scanf("%d", &x);
	if ( x%2 == 0){
		ct = x + 1;
	}
	else{
		ct = x;
	}
	for ( x = 1; x <= 6; x++){
		printf("%d\n", ct);
		ct = ct + 2;
	}
	return 0;
}


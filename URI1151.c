#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, a, b, y, n;
	a = 1;
	b = 0;
	scanf("%d", &n);
	if ( n == 1){
		printf("0");
	}
	else{
		if ( n == 2){
			printf("0 1");
		}
		else{
			printf("0 1 ");
		}	
	}
	for ( x = 3; x<=n; x++){
		y = a + b;
		if ( x == n){
			printf("%d\n", y);
		}
		else{
		printf("%d ", y);
		}
		b = a;
		a = y;	
	}
	return 0;
}


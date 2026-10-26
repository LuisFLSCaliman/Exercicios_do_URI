#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, ct, x, y;
	float d;
	scanf("%d", &n);
	ct = 1;
	while ( ct <= n ){
		scanf("%d %d", &x, &y);
		if ( y == 0){
			printf("divisao impossivel\n");
		}
		else{
			d = (x+0.0)/y;
			printf("%.1f\n", d);
		}
		ct++;
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, ctn, x, ct, ct2;
	scanf("%d", &n);
	ctn = 0;
	while ( ctn < n){
		scanf("%d", &x);
		ct = 1;
		ct2 = 0;
		while ( ct <= x){
			if ( x%ct == 0){
				ct2++;
			}
			ct++;
		}
		if ( ct2 == 2){
			printf("%d eh primo\n", x);
		}
		else{
			printf("%d nao eh primo\n", x);
		}
		ctn++;
	}
	return 0;
}


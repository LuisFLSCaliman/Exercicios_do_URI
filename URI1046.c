#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, h;
	scanf("%d %d", &a, &b);
	if ( a > b){
		h = 24 - a + b;
	}
	else{
		if( a == b){
			h = 24;
		}
		else{
			h = b - a;
		}
		
	}
	printf("O JOGO DUROU %d HORA(S)\n", h);
	return 0;
}


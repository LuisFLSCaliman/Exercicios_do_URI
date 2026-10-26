#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, d, h, m;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ( a < c){
		if ( b <= d){
			h = c - a;
			m = d - b;
		}
		else{
			h = c - a - 1;
			m = d + 60 - b;
		}
	}
	else {
		if( a == c){
			if (b <= d){
				h = 0;
				m = d -b;
				if(m == 0){
					h = 24;
				}
			}
			else{
				h = 23;
				m = d + 60 - b;
			}
		}
		else {
			if (b <= d){
				h = 24 - a + c;
				m = d - b;
			}
			else{
				h = 23 - a + c;
				m = d + 60 - b;
			}
			
		}
		
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int a, b, c, d, h, m;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	while ( a > 0 || b > 0 || c > 0 || d > 0){	
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
		m = (h*60) + m;
		printf("%d\n", m);
		scanf("%d %d %d %d", &a, &b, &c, &d);
	}
	return 0;
}


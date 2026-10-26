#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, y, ct, cx, s;
	scanf("%d %d", &x, &y);
	s = 0;

	if( x > y ){
		if ( y%2 == 0){
			ct = y + 1;
			}
		else{
			ct = y + 2;
		}
		while ( ct < x){
			cx = ct;
			ct = ct + 2;
			s = s + cx;
		}
	}
	else{
		if (x%2 == 0){
			ct = x + 1;
		}
		else{
			ct = x + 2;
		}
		while ( ct < y){
			cx = ct;
			ct = ct + 2;
			s = s + cx;
		}
	}
	printf("%d\n", s);

	return 0;
}


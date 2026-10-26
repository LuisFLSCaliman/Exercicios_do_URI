#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, y, ct, cx, s;
	scanf("%d %d", &x, &y);
	s = 0;

	if( x > y ){
		ct = y;
		while ( ct <= x){
			cx = ct;
			if ( ct%13 != 0){
				s = s + cx;
			}
			ct++;
		}
	}
	else{
		ct = x;
		while ( ct <= y){
			cx = ct;	
			if ( ct%13 != 0){
				s = s + cx;
			}
			ct++;
		}
	}
	printf("%d\n", s);

	return 0;
}


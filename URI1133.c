#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, y, ct, cx, s;
	scanf("%d %d", &x, &y);
	if( x > y ){
		ct = y + 1;
		while ( ct < x){
			if ( ct%5 == 2 || ct%5 == 3){
				printf("%d\n", ct);
			}
			ct++;
		}
	}
	else{
		ct = x + 1;
		while ( ct < y){	
			if ( ct%5 == 2 || ct%5== 3){
				printf("%d\n", ct);
			}
			ct++;
		}
	}
	return 0;
}


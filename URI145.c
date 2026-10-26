#include <stdio.h>
#include <stdlib.h>

//alou galera

int main()
{
	int x, y, ct, ctx;
	ct = 1;
	ctx = 1;
	scanf("%d %d", &x, &y);
	while ( ct <= y){
		if ( ctx == x){
			ctx = 0;
			printf("%d\n" ,ct);
		}
		else{
			printf("%d ",ct);
		}
		ct++;
		ctx++;
	}
	/* tamo junto
	faml
	vambora
	*/
	return 0;
}


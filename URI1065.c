#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, y, x, z;
	y = 0;
	x = 1;
	
	for ( x ; x <= 5; x++){
		scanf("%d", &a);
		z = a%2;
		if ( z == 0){
			y++;
		}
	}
	printf("%d valores pares\n", y);
	
	return 0;
}


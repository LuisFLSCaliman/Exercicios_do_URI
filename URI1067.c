#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int X, y;
	scanf("%d", &X);
	y = 1;
	
	while ( y <= X ){
		printf("%d\n", y);
		y = y + 2;
	}

	return 0;
}


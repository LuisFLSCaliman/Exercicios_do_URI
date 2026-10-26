#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x, z, ct, ct2, s;
	scanf("%d", &x);
	scanf("%d", &z);
	while ( z <= x){
		scanf("%d", &z);
	}
	s = 0;
	ct = x;
	ct2 = 0;
	while ( s < z){
		s = s + ct;
		ct++;
		ct2++;
	}
	printf("%d\n", ct2);
	return 0;
}


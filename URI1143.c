#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n, ct;
	ct = 1;
	scanf("%d", &n);
	while( ct <= n){
		printf("%d %d %d\n", ct, ct*ct, ct*ct*ct);
		ct++;
	}
	return 0;
}


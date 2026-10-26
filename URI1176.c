#include <stdio.h>

int main()
{
	unsigned long long int fib[61];
	int x;
	fib[0] = 0;
	fib[1] = 1;
	
	for ( int i = 2; i <= 60; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	scanf("%d",&x);
	int y[x];
	
	for ( int i = 0; i < x; i++){
		scanf("%d", &y[i]);
	}
	for ( int i = 0; i < x; i++){
		printf("Fib(%d) = %llu\n", y[i], fib[y[i]]);
	}
	
	return 0;
}


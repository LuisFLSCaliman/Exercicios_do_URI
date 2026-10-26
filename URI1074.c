#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int x,ct, N;
	scanf("%d", &x);
	ct = 0;
	while( ct < x){
		scanf("%d", &N);
		if ( N == 0){
			printf("NULL\n");
		}
		else{
			if ( N%2 == 0){
				printf("EVEN ");
			}
			else{
				printf("ODD ");
			}
			if ( N > 0){
				printf("POSITIVE\n");
			}
			else{
				printf("NEGATIVE\n");
			}
		}
		ct++;
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int c, q;
	scanf("%d %d", &c, &q);
	if (c == 1){
		double v;
		v = q * 4.00;
		printf("Total: R$ %.2lf\n", v);
	}
	else {
		if (c == 2){
			double v;
			v = q * 4.50;
			printf("Total: R$ %.2lf\n", v);
		}
		else{
			if(c == 3){
				double v;
				v = q * 5.00;
				printf("Total: R$ %.2lf\n", v);
			}
			else {
				if (c == 4){
					double v;
					v = q * 2.00;
					printf("Total: R$ %.2lf\n", v);
				}
				else{
					double v;
					v = q * 1.50;
					printf("Total: R$ %.2lf\n", v);
					
				}
			}
		}
	}
	
	return 0;
}


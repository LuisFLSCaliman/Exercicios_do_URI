#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int m, n, ct, cx, s;
	scanf("%d %d", &m, &n);
	while ( n > 0 && m > 0){
		s = 0;
		if ( n > m){
			ct = m;
			while ( ct <= n){
				printf("%d ",ct);
				cx = ct;
				ct++;
				s = s + cx;
			}
			printf("Sum=%d\n", s);
		}
		else {
			ct = n;
			while ( ct <= m){
				printf("%d ",ct);
				cx = ct;
				ct++;
				s = s + cx;
			}
			printf("Sum=%d\n", s);
			
		}
		scanf("%d %d", &m, &n);
	}
	return 0;
}


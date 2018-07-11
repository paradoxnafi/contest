#include <stdio.h>

int main()
{
	int i, T, a, b, c, mid;

	scanf("%d", &T);

	for(i = 1; i <= T; i++) {
		scanf("%d %d %d", &a, &b, &c);

		if( ((a > b) && (a < c)) || ((a < b) && (a > c)) ) {
			mid = a;
		} else if( ((b > a) && (b < c)) || ((b < a) && (b > c)) ) {
			mid = b;
		} else {
			mid = c;
		}

		printf("Case %d: %d\n", i, mid);
	}

	return 0;
}
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, x[n];

	for(i = 1; i <= n; i++) {
		x[i] = i;
	}

	for(i = 1; i <= n; i++) {
		printf("%d", x[i]);
	}
	puts("");
	return 0;
}
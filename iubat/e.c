#include <stdio.h>

int main()
{
	int T, i, a, b, j, tmp;

	scanf("%d", &T);

	for(i = 1; i <= T; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		tmp = 0;

		for(j = a; j <= b; j++) {
			if(j % 2 != 0) {
				tmp += j;
			}
		}
		printf("Case %d: %d\n", i, tmp);
	}

	return 0;
}

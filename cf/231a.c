#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, count, point, i, j, input;

	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		point = 0;

		for(j = 1; j <= 3; j++) {
			scanf("%d", &input);

			if(input == 1) {
				point += 1;
			}

			if(point >= 2) {
				count += 1;
			}
		}
	}

	printf("%d", count);

	return 0;
}
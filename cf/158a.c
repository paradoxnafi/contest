#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k, i, data;
	int count = 0;

	scanf("%d %d", &n, &k);

	for(i = 1; i <= n; i++) {
		scanf("%d", &data);

		if(data >= k) {
			count += 1;
		}
	}	
	
	printf("%d", count);

	return 0;
}
#include <stdio.h>

int main()
{
	long int i, a, b, sum, c, al, bl;
	int p;
	c = 0;
	p = 0;

	scanf("%lu %lu", &a, &b);

	if( (a == 0) && (b == 0) ) {
		return 0;
	}

	while(1) {
		al = a % 10;
		bl = b % 10;

		a /= 10;
		b /= 10;

		sum = al + bl + p;
		if(sum > 9) {
			c++;
			p = 1;
		} else {
			p = 0;
		}

		if( (a == 0) && (b == 0) ) {
			break;
		}
	}

	if(c == 0) {
		printf("No carry operation.\n");
	} else if(c == 1) {
		printf("1 carry operation.\n");
	} else {
		printf("%lu carry operations.\n", c);
	}

	return 0;
}
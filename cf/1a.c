#include <stdio.h>
#include <math.h>
 
int main()
{
	int n, m, a, l, w, block;

	scanf(" %d %d %d", &n, &m, &a);

	l = floor( n/a );
	if( (l % a) != 0 ) {
		l++;
	}

	w = floor( m/a );
	if( (m % a) != 0) {
		w++;
	}

	block = l*w;

	printf("%d \n", block);

	return 0;
}
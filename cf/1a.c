#include <stdio.h>
 
int main()
{
	int n, m, a, l, w, block;
	scanf(" %d %d %d", &n, &m, &a);

	l =  n/a ;
	w =  m/a ;

	if( (n%a != 0) && (m%a != 0) ) {
		l++;
		w++;
		block = (l*w) + 1;
	} else if( n%a != 0 ) {
		l++;
		block = l*w;
	} else if( m%a != 0) {
		w++;
		block = l*w;
	} 
	
	printf("%d \n", block);

	return 0;
}
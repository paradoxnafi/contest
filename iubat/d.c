#include <stdio.h>

int main()
{
	long int i, count;
	i = 1;
	count = 0;

	while(1) {
		if( (i%2 == 0) || (i%3 == 0) || (i%5 == 0) ) {
			count++;
		}
	
		if(count == 1500) {
			break;
		}
		i++;
		
	}

	printf("The 1500'th ugly number is %ld.\n", i+1);

	return 0;
}
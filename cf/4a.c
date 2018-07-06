#include <stdio.h>
 
int main()
{
	int w, i, m;
	scanf(" %d", &w);

	if(w % 2 != 0) {
		printf("NO \n");
	}else if(w == 2) {
		printf("NO \n");
	} else {
		printf("YES \n");
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, L;
	char Input[101];
	char D, tmp;

	scanf("%s", &Input);

	L = strlen(Input);

	for(i = 0; i < L; i++) {
		D = tmp[i]

		if(D != 'A' || D != 'E' || D != 'I' || D != 'O' || D != 'U' || D != 'Y' || D !=  'a' || D != 'e' || D != 'i' || D != 'o' || D != 'u' || D != 'y') {
			 if (D >= 'A' && D <= 'Z') {
			 	D += 32;
			 	printf("%c\n", D);
			 }
		}
	}

	return 0;
}
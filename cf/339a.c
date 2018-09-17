#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s[100];
	int n[52];
	int i, j, tmp, k, length;

	scanf("%s", &s);
	length = strlen(s);

	for(i = 0, j = 0; i < length; i += 2, j++) {
		tmp = s[i];
		printf("%c\n", s[i]);
		n[j] = atoi(tmp);
	}

}
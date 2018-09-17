// This will take a while to complete

#include <iostream>

using namespace std;

int main()
{
	int T, i;
	float AB, BC, CD, AC, AD;

	cin >> T;

	for(i = 1; i <= T; i++) {
		cin >> AB >> BC >> CD;

		printf("%.2f %.2f %.2f", AB, BC, CD);

	}

	return 0;
}
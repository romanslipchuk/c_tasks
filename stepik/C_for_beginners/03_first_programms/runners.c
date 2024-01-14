#include <stdio.h>

int main() {

	int round;
	float k;

	scanf("%d%f", &round, &k);

	printf("%d\n", (int)(round - round * k));

	return 0;
}
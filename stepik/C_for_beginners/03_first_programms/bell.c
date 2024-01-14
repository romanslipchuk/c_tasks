#include <stdio.h>

int main() {
	int bell, nBell;

	scanf("%d%d", &bell, &nBell);

	printf("%d", (nBell - bell + 1) * (nBell + bell) / 2);

	return 0;
}
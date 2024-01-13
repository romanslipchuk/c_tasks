#include <stdio.h>

int main(void) {
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", x * 60 + y);
	printf("%d\n", x * 3600 + y * 60);

	return 0;
	}
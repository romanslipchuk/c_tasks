#include <stdio.h>

int main() {
	float v;

	scanf("%f", &v);
	printf("%f\n", v * 1000.0 / 3600.0);
	
	return 0;
}
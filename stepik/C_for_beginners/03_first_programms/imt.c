#include <stdio.h>

int main() {
	float m, h, imt;
	int hsm;

	scanf("%f%d", &m, &hsm);
	h = (float) hsm / 100;
	imt = m / (h * h);

	printf("%f\n", imt);

	return 0;
}
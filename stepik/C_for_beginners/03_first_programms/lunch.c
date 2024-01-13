#include <stdio.h>

int main (void) {
	int k_rice, k_veg, n;

	scanf("%d%d", &k_rice, &k_veg);
	n = k_rice + 2 * k_veg;
	printf("%d\n", n);

	return 0;
}
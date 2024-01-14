#include <stdio.h>

int main() {
	int g1, s1, k1, g2, s2, k2;

	scanf("%d%d%d", &g1, &s1, &k1);
	scanf("%d%d%d", &g2, &s2, &k2);
	g1 = g1 + g2;
	s1 = s1 + s2;
	k1 = k1 + k2;
	printf("%d %d %d\n", (g1 * 17 * 29 + s1 * 29 + k1) / (17 * 29),\
						((g1 * 17 * 29 + s1 * 29 + k1) / 29) % 17,\
						(g1 * 17 * 29 + s1 * 29 + k1) % 29 );

	return 0;
}
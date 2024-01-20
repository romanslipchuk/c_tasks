#include <stdio.h>

#define GALEON 17
#define SICKLE 29

int main() {
	int g1, s1, k1, g2, s2, k2, g, s, k, t1, t2, t;

	scanf("%d%d%d", &g1, &s1, &k1);
	scanf("%d%d%d", &g2, &s2, &k2);
	t1 = (g1*GALEON + s1) * SICKLE + k1;
	t2 = (g2*GALEON + s2) * SICKLE + k2;

	t = t1 +t2;

	s = t / SICKLE;
	k = t % SICKLE;
	g = s / GALEON;
	s = s % GALEON;

	printf("%d %d %d\n", g, s, k);

	return 0;
}
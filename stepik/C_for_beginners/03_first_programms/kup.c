#include <stdio.h>

int main() {

	int rub, kop, n, rest;

	scanf("%d%d", &rub, &kop);

	n = (rub * 100 + kop) / 106;
	rest = (rub * 100 + kop) % 106;

	printf("%d %d \n", n, rest);
	return 0;
}
#include <stdio.h>

int main() {
	float s, w, ch;

	scanf("%f%f%f", &s, &w, &ch);
	printf("%d\n", (int)((s / w) / ch));

	return 0;
}
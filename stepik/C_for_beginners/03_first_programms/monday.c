#include <stdio.h>

int main() {

	int month, day;
	
	scanf("%d%d", &month, &day);
	printf("%d", 1 + (month - day) / 7);

	return 0;
}
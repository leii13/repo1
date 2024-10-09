#include <stdio.h>

int main() {
	int a, b;
	printf("Podaj dwie liczby ");
	scanf("%d %d", &a, &b);
	printf("%d\n", a++);
	printf("%d\n", ++a);
	printf("b: %d\n", b--);
	printf("b: %d\n", --b);
	return 0;
}

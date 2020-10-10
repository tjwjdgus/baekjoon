#include<stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) {
		printf("-1\n");
		return 0;
	}

	int n = a/(c - b)+1;

	printf("%d\n", n);
	return 0;
}
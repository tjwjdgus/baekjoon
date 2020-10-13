#include<stdio.h>
int main(void) {
	int n;
	int count=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		count = 0;
		while (count < n) {
			printf("*");
			count++;
			if (count == n)
				break;
			printf(" ");
			count++;
		}
		printf("\n");
		count = 0;
		while (count < n) {
			printf(" ");
			count++;
			if (count == n)
				break;
			printf("*");
			count++;
		}
		printf("\n");
	}
	return 0;
}